#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void topView(Node * root) {
        vector<int> ans;
        map<int, int> mp;
        queue<pair<Node *, int>> q;
        
        q.push({root, 0});
        while(!q.empty()) {
            auto it = q.front();
            q.pop();
            Node* node = it.first;
            int line = it.second;
            if(mp.find(line) == mp.end()) mp[line] = node->data;
            if(node->left !=NULL) q.push({node->left, line - 1});
            if(node->right != NULL) q.push({node->right, line + 1});
        }
        for(auto node : mp) {
            ans.push_back(node.second);
        }
        for(auto it : ans) {
            cout << it << " ";
        }

    }

};

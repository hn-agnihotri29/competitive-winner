#include <bits/stdc++.h>	

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

    void levelOrder(Node * root) {
        vector<int> ans;
        queue<Node *> q;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            for(int i = 0; i <  size; i++) {
                Node * node = q.front();
                q.pop();
                if(node->left !=  NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
                
                ans.push_back(node->data);
            }
        }
        
        for(auto i : ans) {
            cout << i << " ";
        }

    }

};

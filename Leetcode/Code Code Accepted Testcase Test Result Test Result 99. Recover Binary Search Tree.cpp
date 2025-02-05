class Solution {
private:
    TreeNode* first;
    TreeNode* middle;
    TreeNode* prev;
    TreeNode* last;
private: 
    void inorder(TreeNode* root) {
        if(root == NULL) return;

        inorder(root->left);
        /*
        We are checking if the prev node val is greater than current node in that case 
        it violate the BST rule
        */
        if(prev != NULL && (root->val < prev->val)) {
            // for 1st violation since first == NULL than we store the values
            if(first == NULL) {
                middle = root;
                first = prev;
            
            } else {
                //2nd violation
                last = root;
            }
        }
        //Mark node as prev to keep track for next node;
        prev = root;
        inorder(root->right);

    }
public:
    void recoverTree(TreeNode* root) {
        first = middle = last = NULL;
        prev = new TreeNode(INT_MIN);
        inorder(root);
        //1st case: if 2 swapped node are not adjacent
        if(first && last) swap(first->val, last->val);
        //2nd case: if 2 swapped node are adjacent to each other;
        else if (first && middle) swap(first->val, middle->val);
    }
};

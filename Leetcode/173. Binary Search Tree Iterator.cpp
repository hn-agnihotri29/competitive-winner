class BSTIterator {
    stack<TreeNode* > myStack;
private:
    void pushAll(TreeNode* root) {
        for(; root != NULL; myStack.push(root), root = root->left);
    }
public:
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    int next() {
        TreeNode* node = myStack.top();
        myStack.pop();
        pushAll(node->right);
        return node->val; 
    }
    
    bool hasNext() {
        return !myStack.empty();
    }
};

class BSTIterator {
    stack<TreeNode* > st;
    //reverse = true -> before;
    //reverse = false -> next;
    bool reverse = true;
    
    public:
        BSTIterator(TreeNode* root, bool isReverse) {
            reverse = isReverse;
            pushAll(root);
        }
        /** return whether we have next node in stack*/
        bool hasNext() {
            return !st.empty();
        }

        int next() {
            TreeNode* node = st.top();
            st.pop();
            if(!reverse) pushAll(node->right);
            else pushAll(node->left);
            return node->val;
        }

    private: 
    void pushAll(TreeNode* node) {
        for(; node != NULL; ) {
            st.push(node);
            if(reverse == true) {
                node = node->right;
            } else {
                node = node->left;
            }
        }
    }
 };
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        BSTIterator l(root, false);
        BSTIterator r(root, true);

        int i = l.next();
        int j = r.next();

        while(i < j) {
            if(i + j == k) return true;
            else if(i + j < k) i = l.next();
            else j = r.next();
        }
        return false;
    }
};

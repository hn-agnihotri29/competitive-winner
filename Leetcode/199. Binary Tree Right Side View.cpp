void treeView(TreeNode* node, int level, vector<int>& result) {

        if(node == NULL) return;

        if(level == result.size()) result.push_back(node->val);

        treeView(node->right, level + 1, result);
        treeView(node->left, level + 1, result);

    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        treeView(root, 0, ans);
        return ans;
    }

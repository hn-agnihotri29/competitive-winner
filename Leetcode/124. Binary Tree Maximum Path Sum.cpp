int maxPathSumTree(TreeNode* node, int& sum) {
        if(node == NULL) return 0;

        int leftSum = max(0, maxPathSumTree(node->left, sum));
        int rightSum = max(0, maxPathSumTree(node->right, sum));

        sum = max(sum, leftSum + rightSum + node->val);

        return (node->val) + max(leftSum, rightSum);
    }
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        maxPathSumTree(root, maxSum);
        return maxSum;
    }

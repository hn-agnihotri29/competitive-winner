vector<vector<int>> result;
    vector<vector<int>> permute(vector<int>& nums) {
        backtrack(nums, 0);
        return result;
    }
    void backtrack(vector<int> nums, int begin) {
        if(begin >= nums.size()) {
            result.push_back(nums);
            return;
        }
        for(int i = begin; i < nums.size(); i++) {
            swap(nums[begin], nums[i]);
            backtrack(nums, begin + 1);
            swap(nums[begin], nums[i]);
        }
}

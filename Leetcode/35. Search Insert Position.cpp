    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int mid, ans = -1;
        while(left <= right) {
            mid = left + (right - left) / 2;
            if(nums[mid] == target)
                return mid;
            else if(target < nums[mid]) {
                ans = mid;
                right = mid - 1;
            }else
                left = mid + 1;
        }
        if(ans == -1) {
            ans = nums.size();
        }
        return ans;
     }

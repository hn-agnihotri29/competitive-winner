 int removeDuplicates(vector<int>& nums) {
        vector<int>arr;
        int i= 0,k;
        while(i < nums.size()) {
            bool exists = count(begin(arr), end(arr), nums[i]) > 0;

            if(exists == 0) {
            arr.push_back(nums[i]);
            } 

            i++;
            
        }
        k=arr.size();
        nums = arr;
        return k;
    }

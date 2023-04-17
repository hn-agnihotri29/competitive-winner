vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>result;
  
        for(int i = 0;i < candies.size(); i++) {
            candies[i]+= extraCandies;
            if(*max_element(candies.begin(),candies.end()) == candies[i]) {
            candies[i] -= extraCandies;
            result.push_back(true);
            } else {
            result.push_back(false);
            }
        }

        return result;
    }

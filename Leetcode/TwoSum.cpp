unordered_map<int,int>mp;
      int i,d;
      vector<int>v;
      for(i=0;i<nums.size();i++)
      {
          d=target-nums[i];
          if(mp.find(d)==mp.end())
           mp[nums[i]]=i;
          else
          {
              v.push_back(i);
              v.push_back(mp[d]);
              //cout<<"hoho";
              break;
          }
      }
      cout<<i;
      return v;

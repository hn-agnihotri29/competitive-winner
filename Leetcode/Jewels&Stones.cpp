unordered_map<char , int>q;
        
        for(int i = 0; i < stones.size(); i++) {
            if(q.count(stones[i]) > 0) {
                q.at(stones[i])=q.at(stones[i])+1;
            } else {
                q.insert(make_pair(stones[i], 1));
            }
        }

        int c = 0;
        for(int i = 0; i < jewels.size(); i++) {
            if(q.count(jewels[i]) > 0) {
                c += q[jewels[i]];
            }
         }
       
       
        return c;

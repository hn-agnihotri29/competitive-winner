bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        vector<int>stack;

        int j = 0;

        for(int i = 0; i < pushed.size(); i++) {
            stack.push_back(pushed[i]);
            while(stack.size() > 0 && stack.back() == popped[j]) {
                     stack.pop_back();
                      j++;
      
            }
        }

        for(auto x : stack)
            cout  << x << " ";

        if(stack.empty()) 
            return true;
        else
            return false;
    }

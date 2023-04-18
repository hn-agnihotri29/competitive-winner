string mergeAlternately(string word1, string word2) {
        string str = "";

        for(int i = 0; i < word1.size() || i <  word2.size(); i++) {
            if(i < word1.size()) {
            str.push_back(word1[i]);
            } 
            if(i < word2.size())
            str.push_back(word2[i]);
        }

        return str;
    }

void swap(vector<char>& str, int i, int  j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    void reverseString(vector<char>& s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            swap(s, i, j);
            i++;
            j--;
    }

int arrangeCoins(int n) {
        int l = 1, u = n;
        long mid  = 0;
        while(l <= u) {
            mid = l + (u - l)/ 2;
            long coinsNeeded = (mid * (mid + 1)) / 2;
            if(coinsNeeded == n) 
                return mid;
            else if(coinsNeeded < n)
                l = mid  + 1;
            else
                u = mid - 1;

        }
        return u;
    }

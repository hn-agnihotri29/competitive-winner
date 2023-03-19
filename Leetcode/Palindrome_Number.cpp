unsigned long int temp = x;
        unsigned long int r, sum = 0;
        while(x > 0) {
            r = x%10;
            sum = (sum*10) + r;
            x = x / 10;
        }
        if(temp < 0) {
            temp = temp * -1;
        }
        if(temp == sum) {
            return true;
        } else {
            return false;
        }
        

#include <iostream>
using namespace std;

int main() {
    
    int candle[] = {82,49,82,82,41,82,15,63,38,25};
    int count = 0;
    int max = candle[0];
    // use range i < arr.size() in hackerrank
    for(int i = 0; i  < 10; i++) {
         if(candle[i] > max)
           max = candle[i];
    }
  cout<<max<<endl;
  // use rangle i < arr.size()
  for(int i = 0; i < 10 ; i++) {
     if(max == candle[i])
      count++;
    }
  
   cout<<count;
   return 0;
}
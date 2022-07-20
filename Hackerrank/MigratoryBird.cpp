#include <iostream>
using namespace std;


int main() {
  int arr[] = {1,2,3,4,5,4,3,2,1,3,4};
  
  int birdType[6] = {0};
  int max = 0;
  int result;

  for(int i = 0; i < 11; i++) {
     int type = arr[i];
      birdType[type]++;

     if(birdType[type] > max) {
       max = birdType[type];
       result = type;
     }
  }

  cout<<result;
  
}
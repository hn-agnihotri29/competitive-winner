#include <iostream>
using namespace std;


int main() {
  int arr[4] = {73, 67, 38, 33};
  int count = 0;
  int i = 0;

  while(i < 4) {
    if(arr[i] < 38)
      cout<<arr[i]<<endl;
    else if(arr[i] % 5 >= 3)
      cout<<arr[i] + (5 - arr[i]%5)<<endl;
    else
      cout<<arr[i]<<endl;
   i++; 
  }

  for(int i = 0 ; i < 4 ; i++) {
    cout<<arr[i]<<endl;
  }
   
}

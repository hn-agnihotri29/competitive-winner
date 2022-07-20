#include <iostream>
using namespace std;

int main() {
    int arr[5] = {256741038,623958417,467905213,714532089,938071625};
    unsigned int sum = 0;
  int min = arr[0];
  int max = arr[0];
  for(int i = 0; i <5; i++) {
      sum +=arr[i];
      if(arr[i] > max)
        max = arr[i];
      if(arr[i] < min)
        min = arr[i];
  }
  cout<<sum-max<<" "<<sum-min<<endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {

  int arr[] = {-4,3,-9,0,4,1};
  int n = sizeof(arr);
  float flag1 = 0,flag2 = 0,flag3 = 0;
  for(int i = 0; i < n; i++) {
    if(arr[i] < 0)  
      flag1++;
    else if(arr[i] == 0)
     flag2++;
    else 
      flag3++;
  }
  printf("%0.6f", flag3/n);
  printf("\n%0.6f", flag1/n);
  printf("\n%0.6f", flag2/n);
  }
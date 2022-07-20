#include <iostream>
using namespace std;

int findGCD(int a, int b){
    if(b==0)
        return a;
    return findGCD(b, a%b);
}

int main() {
  int arr[] = {2, 4};
  int arr1[] = {16, 32, 96};
    int lcm = arr[0];;
    int  gcd = arr[0];
    int hcf = arr1[0];
  
  int count = 0;

  for(int i=1; i<2; i++){
      gcd = findGCD(arr1[i], lcm);
      // lcm = (lcm*arr[i])/gcd;
    }
  
  for(int i = 0; i < 3; i++) {
    hcf = findGCD(hcf, arr1[i]);
  }

  int i = 1;
  cout<<lcm<<endl;
  
  const int x = lcm;
  
for(int i = lcm, j =2; i <= hcf; i = lcm * j, j++) {
  if(hcf % i == 0)
    count++;
}
  
  cout<<"GCD : "<<hcf<<endl;
  
  cout<<count;
}

//Function returns GCD of a and b

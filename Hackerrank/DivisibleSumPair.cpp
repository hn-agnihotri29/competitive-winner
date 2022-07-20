#include <iostream>
using namespace std;

int main() {
 int k = 3;
 //cin>>k;
  int arr[6] = {1, 3, 2, 6, 1, 2};

  int count = 0;
  
  for(int i = 0; i < 6; i++) {
    cout<<"i = "<<i<<endl;
    for(int j = i + 1; j < 6; j++) {
      cout<<"j = "<<j<<endl;
      if((arr[i]+ arr[j]) % k == 0) {
        count++;
      }
    }
  }

  
  cout<<count;
}
#include <iostream>
using namespace std;


int main() {

 int s;
  int t;
  int a;
  int b;

  

  int apples[1] = {-2};
  int oranges[1] = {-1};
  

  cin>>s>>t;
  cin>>a>>b;
   
    int countApples = 0;
    int countOranges = 0;
    int i;
    
    for (i = 0; i < 1; i++) {
    if (a + apples[i] >= s && a + apples[i] <= t) {
        countApples += 1;
    }
}
    for (i = 0; i < 1; i++) {
    if (b + oranges[i] >= s && b + oranges[i] <= t) {
        countOranges += 1;
    }
}
  cout<<countApples<<endl;
  cout<<countOranges;

}

#include <iostream>
using namespace  std;


int main() {
  int x1, v1, x2, v2;

  cin>>x1>>v1>>x2>>v2;



  if(x2 > x1 && v2 > v1) {
      cout<<"NO";
  } else {
     if(x1 < x2) {
       while(x1 != x2) {
         x1 = x1 + v1;
         x2 = x2 + v2;
         if(x1 == x2) {
           cout<< "YES";
          } 
         if(x1 > x2) {
            cout<<"NO";
           break;
          }
        } 
      }
    }
  

  return 0;
}
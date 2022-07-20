#include <iostream>
using namespace std;

int main() {
 int x,y,z,q;
 cin>>q;
 int arr[q][3];
 int CatAandMouse;
 int CatBandMouse;

  
 for(int i = 0; i < q; i++) {
   cin>>x>>y>>z;
   arr[i][0] = x;
   arr[i][1] = y;
   arr[i][2] = z;
  }

  for(int i = 0; i < q; i++) {
    int p,q,r;
    p = arr[i][0];
    q = arr[i][1];
    r = arr[i][2];

    CatAandMouse = abs(p - r);
    CatBandMouse = abs(q - r);

    if(CatAandMouse > CatBandMouse) 
      cout<<"Cat B"<<endl;
    else if(CatAandMouse < CatBandMouse)
      cout<<"Cat A"<<endl;
    else
      cout<<"Mouse C"<<endl;
  }

  
}
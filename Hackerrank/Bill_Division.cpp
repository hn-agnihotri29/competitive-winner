#include <iostream>
using namespace std;


int main() {
  int arr[] = {3,10,2,9};
  int annaIndex;
  int billCharged;
  int sum = 0;

  cin>>annaIndex>>billCharged;


  for(int i = 0; i < 4; i++) {
    if(i != annaIndex)
       sum += arr[i];
  }
  
  int billActual = sum / 2;
  
  int differnece = billCharged - billActual;
  if(billCharged == billActual)
    cout<<"Bon Appetit";
  else
    cout<<differnece;
}
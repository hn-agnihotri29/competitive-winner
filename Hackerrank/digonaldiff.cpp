#include <iostream>
#include <vector>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int RDigonal = 0;
   int LDigonal = 0;
   int x = arr.size();
   int i,j;
   for(int i = 0; i < x; i++) {
       for(int j = 0; j < x; j++) {
           if(i == j) {
              LDigonal += arr[i][j];
           }
           if(i + j  == x - 1) {
               RDigonal += arr[i][j];
           }
       }  
   }
   int difference = LDigonal - RDigonal;
   return abs(difference);
}
// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void SwapValue(int &a, int &b) {
   int t = a;
   a = b;
   b = t;
    
}


int main() {
    // Write C++ code here
    
    int arr[6] = {13, 46, 24, 52, 20, 9};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0;i <= n- 2; i++) {
        int mini = i;
        for(int j = i; j <= n - 1; j++) {
            if(arr[j] < arr[mini]) 
                mini = j;
        }
        SwapValue(arr[i], arr[mini]);
        
    }
    
   for(int i = 0 ; i < n; i++) {
       cout << arr[i] <<" "; 
   }

    return 0;
}

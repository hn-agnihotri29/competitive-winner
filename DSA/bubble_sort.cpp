#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = b;
    b = a;
    a = temp;
}

int main() {
    // Write C++ code here
    int arr[7] = {13, 46, 25, 52, 20, 9, 10};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = n - 1; i >= 1; i--) {
        for(int j = 0; j <= i -1; j++) {
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j+1]);
        }
    }
    
    for(auto num :  arr) {
        cout << num << " ";
    }
}

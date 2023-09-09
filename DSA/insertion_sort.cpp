#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int arr[7] = {14, 9, 15, 12, 6, 8, 13};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0; i <= n-1; i++) {
        int j = i;
        while( j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
    
    for(auto num : arr) {
        cout << num << " ";
    }

    return 0;
}

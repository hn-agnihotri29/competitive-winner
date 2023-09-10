#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    
    while(i < j) {
        while(arr[i] <= pivot && i <= high) 
            i++;
            
        while(arr[j] > pivot && j >= low )
            j--;
        
        if(i < j) swap(arr[i], arr[j]);
    }
    
    swap(arr[low], arr[j]);
    
    return j;
}

void qs(vector<int> &arr, int low, int high) {
    if(low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}


void display(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
     vector<int> arr{3, 1, 2, 4, 1, 5, 2, 6, 4};
     
     qs(arr, 0, arr.size() - 1);
     
     
     cout << "After Sorting:- " << endl;
     display(arr);
     

    return 0;
}

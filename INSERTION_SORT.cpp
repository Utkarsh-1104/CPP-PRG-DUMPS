#include<bits/stdc++.h>
using namespace std;

void insertion_sort (int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int j = i;
        while( j > 0 && arr[j] < arr[j-1] ) {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

int main() {
    int n = 6;
    int arr[6] = {6, 5, 4, 3, 2, 1};
    cout<<"Before sorting : ";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertion_sort(arr, n);
    cout<<"After sorting : ";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}
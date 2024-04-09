#include<bits/stdc++.h>
using namespace std;

void selection_sort (int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int mini = i;
        for(int j = i; j < n; j++) {
            if(arr[j] < arr[mini]) {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n = 6;
    int arr[6] = {12, 2, 11, 16, 0, 6};
    cout<<"Before sorting : ";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selection_sort(arr, n);
    cout<<"After sorting : ";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}
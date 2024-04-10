#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }   
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
    bubble_sort(arr, n);
    cout<<"After sorting : ";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}

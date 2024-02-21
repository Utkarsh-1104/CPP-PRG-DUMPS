#include<iostream>
using namespace std;

void pattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            (i==0 || i==n-1 || j==0 || j==n-1) ? cout<<"*" : cout<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    pattern(n);
    return 0;
}
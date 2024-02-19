#include<iostream>
using namespace std;

void TRIANGLE (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2*(n-(i+1)); j++)
            cout<<" ";
        for (int k = 0; k < 2*i+1; k++)
            cout<<"* ";
        cout<<endl;
    }
}

void INV_TRIANGLE (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2*i; j++)
            cout<<" ";
        for (int k = 0; k < 2*n-(2*i+1); k++)
            cout<<"* ";
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the value of n : ";
    cin >> n;
    TRIANGLE(n);
    INV_TRIANGLE(n);
    return 0;
}

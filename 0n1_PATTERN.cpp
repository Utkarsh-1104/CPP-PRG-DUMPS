#include<iostream>
using namespace std;

void pattern(int n) {
    for(int i = 0; i<n; i++) {
        for (int j = 0; j <= i; j++) {
            (i+j)%2==0 ? cout<<"1 " : cout<<"0 ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    pattern(n);
}
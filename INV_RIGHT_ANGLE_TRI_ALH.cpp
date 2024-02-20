#include<iostream>
using namespace std;

void pattern(int n) {
    for(int i = 0; i < n; i++) {
        for (char ch = 'A'; ch < 'A' + (n-i); ch++) {
            cout<<ch<<" ";
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
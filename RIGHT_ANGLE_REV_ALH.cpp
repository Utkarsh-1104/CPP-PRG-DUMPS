#include<iostream>
using namespace std;

void pattern(int n) {
    char ch = 'A' + (n-1);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout<<char(ch + j)<<" ";
        }
        ch-=1;
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
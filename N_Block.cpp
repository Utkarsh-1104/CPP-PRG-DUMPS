#include<iostream>
using namespace std;

void N_Block(int n) {
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    N_Block(n);
}
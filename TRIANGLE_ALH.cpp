#include<iostream>
using namespace std;

void pattern(int n) {
    for (int i = 0; i < n; i++)
    {
        for(char ch = 'A'; ch < 'A' + (n-i); ch++) {
            cout<<" ";
        }
        char ch = 'A';
        int brk = (2*i+1)/2;
        for(int j = 0; j < 2*i+1; j++) {
            cout<<ch;
            if(j < brk) ch++;
            else ch--;
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
#include<iostream>
using namespace std;

void pattern(int n) {
    int num = 1;   
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    pattern(n);
}
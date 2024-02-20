#include<iostream>
using namespace std;

void pattern(int n) {
    char al = 'A';
    for (int i = 0; i < n; i++)
    {
        for(char ch = 'A'; ch <= 'A' + i; ch++) {
            cout<<al<<" ";
        }
        cout<<endl;
        al+=1;
    }
}

int main() {
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    pattern(n);
}
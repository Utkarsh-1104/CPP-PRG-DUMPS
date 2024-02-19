#include<iostream>
using namespace std;

void RIGHT_ANGLE_TRI(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout<<endl;
    }
}

void INVERTED_RIGHT_ANGLE_NUM(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j + i < n-1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    RIGHT_ANGLE_TRI(n);
    INVERTED_RIGHT_ANGLE_NUM(n);
}
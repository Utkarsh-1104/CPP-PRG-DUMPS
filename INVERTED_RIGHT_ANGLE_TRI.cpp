#include<iostream>
using namespace std;

void INVERTED_RIGHT_ANGLE_NUM(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j + i < n; j++)
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
    INVERTED_RIGHT_ANGLE_NUM(n);
}
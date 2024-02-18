#include<iostream>
using namespace std;

void INVERTED_RIGHT_ANGLE_NUM(int n) {
    for (int i = 1; i <= n+1; i++)
    {
        for (int j = 1; j + i <= n+1; j++)
        {
            cout<<j;
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
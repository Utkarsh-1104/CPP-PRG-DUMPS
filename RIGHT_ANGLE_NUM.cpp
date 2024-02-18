#include <iostream>
using namespace std;

void RIGHT_ANGLE_NUM(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
//above produces this pattern: 
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

void RIGHT_ANGLE_SAME_NUM(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
//above produces this pattern:
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

int main() {
    int n;
    cout<<"Enter the value of n: "; 
    cin>>n;
    RIGHT_ANGLE_NUM(n);
}
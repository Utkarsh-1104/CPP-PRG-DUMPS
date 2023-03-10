#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cout<<("Enter the rows and columns : ");
    cin>>i>>j;
    int A[i][j];
    cout<<("Enter the elements of the array: \n");
    for(auto& x:A)
    {
        for(auto& y:x)
            cin>>y;
    }
    for(auto& x:A)
    {
        for(auto& y:x)
            cout<<y;
        cout<<endl;
    }
}
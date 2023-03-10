#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l;
    cout<<("Enter the rows and columns of the matrix : ");
    cin>>i>>j;
    int A[i][j], B[i][j], C[i][j];
    cout<<("\nEnter the elements of the matrix : ");
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
    cout<<("\nEnter the elements of another matrix : ");
    for(auto& x:B)
    {
        for(auto& y:x)
            cin>>y;
    }
    for(auto& x:B)
    {
        for(auto& y:x)
            cout<<y;
        cout<<endl;
    }
    cout<<("The sum of the matrices is : \n");
    for(int m=0; m<i; m++)
    {
        for(int n=0; n<j; n++)
            C[m][n] = A[m][n]+B[m][n];
    }
    for(int m=0; m<i; m++)
    {
        for(int n=0; n<j; n++)
            cout<<C[m][n]<<" ";
        cout<<endl;
    }
    cout<<("The difference of the matrices is : \n");
    for(int m=0; m<i; m++)
    {
        for(int n=0; n<j; n++)
            C[m][n] = A[m][n]-B[m][n];
    }
    for(int m=0; m<i; m++)
    {
        for(int n=0; n<j; n++)
            cout<<C[m][n]<<" ";
        cout<<endl;
    }
    cout<<("The product of the matrices is : \n");
    for(int m=0; m<i; m++)
    {
        for(int n=0; n<j; n++)
            C[m][n] = A[m][n]*B[m][n];
    }
    for(int m=0; m<i; m++)
    {
        for(int n=0; n<j; n++)
            cout<<C[m][n]<<" ";
        cout<<endl;
    }
    cout<<("The quotient of the matrices is : \n");
    for(int m=0; m<i; m++)
    {
        for(int n=0; n<j; n++)
            C[m][n] = A[m][n]/B[m][n];
    }
    for(int m=0; m<i; m++)
    {
        for(int n=0; n<j; n++)
            cout<<C[m][n]<<" ";
        cout<<endl;
    }
    return 0;
}

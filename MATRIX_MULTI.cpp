#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l;
    cout<<("Enter the rows and columns of first matrix : ");
    cin>>i>>j;
    cout<<("Enter the rows and columns of second matrix : ");
    cin>>k>>l;
    if(j!=k)
        cout<<("Error!!! Column of first matrix is not equal to row of second matrix....");
    else
    {
        int A[i][j];
        cout<<("\nEnter the elements of the first matrix : ");
        for(auto& x:A)
        {
            for(auto& y:x)
                cin>>y;
        }
    
        int B[k][l];
        cout<<("\nEnter the elements of the second matrix : ");
        for(auto& x:B)
        {
            for(auto& y:x)
                cin>>y;
        }
        int C[i][l];
        for(int m=0; m<i; m++)
        {
            for(int n=0; n<l; n++)
            {
                C[m][n]=0;
                for(int k=0; k<j; k++)
                    C[m][n] += A[m][k]*B[k][n];
            }
        }
        cout<<("The output matrix is : \n");
        for(auto& x:C)
        {
            for(auto& y:x)
                cout<<y<<" ";
            cout<<endl;
        }
    }
    return 0;
}
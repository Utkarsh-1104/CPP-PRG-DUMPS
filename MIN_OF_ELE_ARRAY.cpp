#include<iostream>
using namespace std;
int main()
{
    int n,min;
    cout<<("Enter the number of elements in array : ");
    cin>>n;
    int A[n];
    cout<<("Enter the elements of array : ");
    for(int i=0; i<n; i++)
        cin>>A[i];
    cout<<("The created array is : ");
    for(int x:A)
        cout<<x<<("\t");
    min = 1000000;
    for(int i=0; i<n; i++)
        if(min>A[i])
            min=A[i];
    cout<<("\nThe smallest element of the array is : ")<<min;
    return 0;

}
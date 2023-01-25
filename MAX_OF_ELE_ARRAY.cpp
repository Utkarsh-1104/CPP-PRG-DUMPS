#include<iostream>
using namespace std;
int main()
{
    int n,max;
    cout<<("Enter the number of elements in array : ");
    cin>>n;
    int A[n];
    max=0;
    cout<<("Enter the elements of array : ");
    for(int i=0; i<n; i++)
        cin>>A[i];
    cout<<("The created array is : ");
    for(int x:A)
        cout<<x<<("\t");
    max = 0;
    for(int i=0; i<n-1; i++)
        if(max<A[i])
            max=A[i];
    cout<<("\nThe greatest element of the array is : ")<<max;
    return 0;

}
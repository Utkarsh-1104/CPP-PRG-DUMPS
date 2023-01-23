#include<iostream>
using namespace std;
int main()
{
    int sum,n;
    cout<<("Enter the number of elements in array : ");
    cin>>n;
    int A[n];
    cout<<("Enter the elements : ");
    for(int i=0; i<n; i++)
        cin>>A[i];
    cout<<("The created array is : ");
    for(int x:A)
        cout<<x<<("\t");
    sum=0;
    for(int x:A)
        sum+=x;
    cout<<("\nThe sum of all the elements of array is : ")<<sum;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n,key,l=0,h,mid,flag=0;
    cout<<("Enter the number of elements in the array : ");
    cin>>n;
    int A[n];
    cout<<("Enter the elements of the array : ");
    for(int i=0; i<n; i++)
        cin>>A[i];
    cout<<("The created array is : ");
    for( int x:A)
        cout<<x<<("\t");
    cout<<("\nEnter the element you want to search : ");
    cin>>key;
    h=n-1;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(key == A[mid])
        {
            cout<<("Found it at ")<<mid+1<<(" position.");
            l=n;
            flag=1;
        }
        else if(key<A[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    if(flag!=1)
        cout<<("Error element not found!!!!!");
    return 0;
}
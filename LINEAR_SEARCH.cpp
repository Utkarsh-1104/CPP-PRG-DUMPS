#include<iostream>
using namespace std;
int main()
{
    int n,m,pos;
    cout<<("Enter the number of elements in the array : ");
    cin>>n;
    int A[n];
    cout<<("Enter the elements of the array : ");
    for(int i=0; i<n; i++)
        cin>>A[i];
    cout<<("The created array is : ");
    for(int x:A)
        cout<<x<<("\t");
    cout<<("\nEnter the element you want to search : ");
    cin>>m;
    pos = -1;
    for(int i=0; i<n; i++)
        if(m==A[i])
        {
            pos=i;
            break;
        }
    if(pos==-1)
        cout<<("Element not found!!!!!");
    else
        cout<<("Element found at ")<<pos+1<<(" position.");
    return 0;

}
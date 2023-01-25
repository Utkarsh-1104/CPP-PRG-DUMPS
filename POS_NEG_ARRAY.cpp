#include<iostream>
using namespace std;
int main()
{
    int n,pos=0,neg=0,zero=0;
    cout<<("Enter the number of elements in the array : ");
    cin>>n;
    int A[n];
    cout<<("Enter the elements : ");
    for(int i=0; i<n; i++)
        cin>>A[i];
    cout<<("The created array is : ");
    for(int x:A)
        cout<<x<<("\t");
    for(int x:A)
    {
        if(x>0)
            pos+=1;
        else if(x<0)
            neg+=1;
        else
            zero+=1;
    }
    cout<<("\nTotal positive numbers are : ")<<pos;
    cout<<("\nTotal negative numbers are : ")<<neg;
    cout<<("\nTotal zeros are : ")<<zero;
    return 0;
}
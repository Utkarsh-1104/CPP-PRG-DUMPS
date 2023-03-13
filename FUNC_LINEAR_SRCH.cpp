#include<iostream>
using namespace std;
int srch(int A[],int a,int ele)
{
    int pos = -1;
    for(int j=0; j<a; j++)
        if(A[j]==ele)
            pos = j;
    return pos;
}
int main()
{
    int n,key,index;
    cout<<("Enter the number of elments of the array : ");
    cin>>n;
    int A[n];
    cout<<("Enter the elements of the array : ");
    for(auto& x:A)
        cin>>x;
    cout<<("Enter the element you want to find : ");
    cin>>key;
    index = srch(A,n,key);
    if(index==-1)
        cout<<("The element is not in the array..........");
    else
        cout<<("Element found at ")<<index+1<<(" position..");
}
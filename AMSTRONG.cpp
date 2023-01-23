#include<iostream>
using namespace std;
int main()
{
    int n,i,a,m;
    cout<<("Enter a number : ");
    cin>>n;
    n=m;
    a=0;
    while(n!=0)
    {
        i=n%10;
        n/=10;
        a = a+(i*i*i);
    }
    if(a==m)
        cout<<("It is an amstrong number.");
    else
        cout<<("It is not an amstrong number.");
    return 0;
}

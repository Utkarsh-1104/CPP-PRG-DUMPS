#include<iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cout<<("Enter a number : ");
    cin>>n;
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }

    }
    if(flag==1)
        cout<<("This is not a prime number.");
    else
        cout<<("This is a prime number.");
    return 0;
}

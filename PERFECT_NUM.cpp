#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cout<<("Enter a number : ");
    cin>>n;
    sum=0;
    for(int i=1; i<=n/2; i++)
    {
        if(n%i==0)
            sum+=i;
    }
    sum+=n;
    if(2*n==sum)
        cout<<("It is a perfect number.");
    else
        cout<<("It is not a perfect number.");
    return 0;
}

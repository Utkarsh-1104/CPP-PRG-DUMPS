#include<iostream>
using namespace std;
int main()
{
    int n,i,sum;
    cout<<("Enter a natural number : ");
    cin>>n;
    i=1;
    sum=0;
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    cout<<("The sum of ")<<n<<(" natural numbers are : ")<<sum;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<("Enter a number : ");
    cin>>n;
    cout<<("The digits of the number is : ");
    while(n!=0)
    {
        i=n%10;
        n/=10;
        cout<<i<<("\t");
    }
    return 0;
}

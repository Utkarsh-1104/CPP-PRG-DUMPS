#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<("Enter a number : ");
    cin>>n;
    cout<<("The factors of ")<<n<<(" is : ");
    for(int i=1; i<=n/2; i++)
    {
        if(n%i==0)
            cout<<i<<("\t");
    }
    cout<<n;
    return 0;
}

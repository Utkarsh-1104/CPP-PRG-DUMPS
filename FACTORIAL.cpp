#include<iostream>
using namespace std;
int main()
{
    cout<<("Enter a number : ");
    long double fact;
    int n;
    cin>>n;
    fact=1;
    for(int i=1; i<=n; i++)
        fact *= i;
    cout<<("The factorial of ")<<n<<(" is : ")<<fact;
    return 0;
}

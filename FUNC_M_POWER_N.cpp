#include<iostream>
#include<cmath>
using namespace std;
int power(int m, int n)
{
    int ans = pow(m,n);
    return ans;
}
int main()
{
    int a,b,res;
    cout<<("Enter two numbers : ");
    cin>>a>>b;
    res = power(a,b);
    cout<<a<<(" to the power ")<<b<<(" is : ")<<res;
    return 0;
}
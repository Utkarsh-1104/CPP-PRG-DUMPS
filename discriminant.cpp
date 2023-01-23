#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<("Enter a,b,c : ");
    cin>>a>>b>>c;
    d = pow(b,2)-4*a*c;
    if(d>0)
        cout<<("It has real and distinct roots.");
    else if(d==0)
        cout<<("It has real and equal roots.");
    else
        cout<<("It has imaginary roots.");
    return 0;
}

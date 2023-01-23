#include<iostream>
using namespace std;
int main()
{
    float si,p,r,t;
    cout<<("Enter principal amount, rate of interest, and time in years respectively : ");
    cin>>p>>r>>t;
    si = p*r*t/100;
    cout<<("The simple interest is : ")<<si;
    return 0;
}

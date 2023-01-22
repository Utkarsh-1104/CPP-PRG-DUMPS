#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float r1,r2,a,b,c;
    cout<<("Enter a,b,c respectively : ");
    cin>>a>>b>>c;
    r1 = (-b+(sqrt(b*b-4*a*c)))/(2*a);
    r2 = (-b-(sqrt(b*b-4*a*c)))/(2*a);
    cout<<("The roots of the quadratic equation is : ")<<r1<<(" and ")<<r2;
    return 0;
}

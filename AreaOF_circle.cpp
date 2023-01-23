#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float area,r;
    cout<<("Enter the radius of circle : ");
    cin>>r;
    area = M_PI*(pow(r,2));
    cout<<("The area of the circle is : ")<<area;
    return 0;
}

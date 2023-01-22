#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float vol,r,h;
    cout<<("Enter the radius and height of cylinder : ");
    cin>>r>>h;
    vol = M_PI*pow(r,2)*h;
    cout<<("The volume of cylinder is : ")<<vol;
    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a1,b1,c1,a2,b2,c2,AB;
    cout<<("Enter the co-ordinates of point A : ");
    cin>>a1>>b1>>c1;
    cout<<("Enter the co-ordinates of point B : ");
    cin>>a2>>b2>>c2;
    AB = sqrt(pow(a2-a1,2)+pow(b2-b1,2)+pow(c2-c1,2));
    cout<<("The distance between the two points are : ")<<AB;
    return 0;
}

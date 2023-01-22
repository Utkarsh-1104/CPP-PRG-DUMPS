#include<iostream>
using namespace std;
typedef int marks;
int main()
{
    marks m1,m2,m3,avg;
    cout<<("Enter the marks of three subjects : ");
    cin>>m1>>m2>>m3;
    avg = (m1+m2+m3)/3;
    if(avg>=85 && avg<=100)
        cout<<avg<<(" is A+.");
    else if(avg>=65 && avg<85)
        cout<<avg<<(" is B.");
    else
        cout<<avg<<(" is C.");
    return 0;
}

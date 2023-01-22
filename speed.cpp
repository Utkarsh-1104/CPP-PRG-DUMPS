#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float v,u,a,s;
    cout<<("Enter initial speed : ");
    cin>>u;
    cout<<("Enter acceleration : ");
    cin>>a;
    cout<<("Enter distance : ");
    cin>>s;
    v = sqrt(pow(u,2) + 2*a*s);
    cout<<("The speed is : ")<<v;
    return 0;
}

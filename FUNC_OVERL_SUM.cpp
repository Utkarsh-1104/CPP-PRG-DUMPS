#include<iostream>
using namespace std;
int sum(int x, int y)
{
    return x+y;
}
float sum(float x, float y)
{
    return x+y;
}
int main()
{
    int a,b,c;
    float p,q,r;
    cout<<("Enter two integers : ");
    cin>>a>>b;
    cout<<("Enter two floats : ");
    cin>>p>>q;
    c = sum(a,b);
    r = sum(p,q);
    cout<<"Sum of integers is : "<<c;
    cout<<"\nSum of floats is : "<<r;
    return 0;
}
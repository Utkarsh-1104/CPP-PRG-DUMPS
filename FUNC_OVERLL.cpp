#include<iostream>
using namespace std;
float sum(int x, float y)
{
    cout<<x<<" "<<y;
    return x+y;
}
float sum(float m, int n)
{
    cout<<m<<" "<<n;
    return m+n;
}
int main()
{
    int a; float b;
    cout<<("Enter two numbers : ");
    cin>>a>>b;
    float (c) = sum(a,b);
    cout<<endl<<c<<endl;
    float d = sum(b,a);
    cout<<endl<<d;
}

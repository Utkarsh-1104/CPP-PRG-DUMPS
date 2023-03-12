#include<iostream>
using namespace std;
int add(int x, int y)
{
    int z = x+y;
    return z;
}
int main()
{
    int a,b,c;
    cout<<("Enter two numbers : ");
    cin>>a>>b;
    c = add(a,b);
    cout<<"Sum is : "<<c;
}
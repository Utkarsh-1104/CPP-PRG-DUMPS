#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<("Enter an number : ");
    cin>>a;
    int *p;
    p = &a;
    cout<<a<<endl;;
    cout<<&a<<endl;;
    cout<<p<<endl;;
    cout<<&p<<endl;;
    cout<<*p<<endl;;
    return 0;
}
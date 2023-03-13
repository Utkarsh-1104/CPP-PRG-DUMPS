#include<iostream>
using namespace std;
int &fun(int &a)
{
    cout<<a<<endl;
    return a;
}
int main()
{
    int x=10;
    cout<<x;
    fun(x) = 25;
    cout<<x;
    return 0;
}
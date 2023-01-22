#include<iostream>
using namespace std;
int main()
{
    int h;
    cout<<("Enter an hour (24 hr) : ");
    cin>>h;
    if(h>=9 && h<=17)
        cout<<("It is a working hour");
    else
        cout<<("It is not a working hour");
    return 0;
}

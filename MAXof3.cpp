#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    /*
    if(a<b)
    {
        if(b<c)
            cout<<c<<" is greatest.";
        else
            cout<<b<<" is greatest.";
    }
    else
    {
        if(a>c)
            cout<<a<<" is greatest.";
        else
            cout<<c<<" is greatest.";
    }
    return 0;
    */
    if(a>b && a>c)
        cout<<a<<(" is greatest");
    else if(b>c)
        cout<<b<<(" is greaetst");
    else
        cout<<c<<(" is greatest");
    return 0;
}

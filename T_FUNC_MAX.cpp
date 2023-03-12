#include<iostream>
using namespace std;
template <class T>
T max(T x, T y, T z)
{
    if(x>y && x>z)
        return x;
    else if(y>z)
        return y;
    else return z;
}
int main()
{
    int a,b,c,m;
    float p,q,r,n;
    cout<<("Enter three integers : ");
    cin>>a>>b>>c;
    cout<<("Enter three floats : ");
    cin>>p>>q>>r;
    m = max(a,b,c);
    n  = max(p,q,r);
    cout<<("The greatest integer is : ")<<m;
    cout<<("\nThe greatest float is : ")<<n;
    return 0;
}
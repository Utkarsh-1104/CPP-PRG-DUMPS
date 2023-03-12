#include<iostream>
using namespace std;
int max(int x, int y, int z)
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
    cout<<("Enter three numbers : ");
    cin>>a>>b>>c;
    m = max(a,b,c);
    cout<<("Greatest number is : ")<<m;
    return 0;
}
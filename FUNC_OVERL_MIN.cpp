#include<iostream>
using namespace std;
int min(int x, int y, int z)
{
    if(x<y && x<z)
        return x;
    else if(y<z)
        return y;
    else return z;
}
float min(float x, float y, float z)
{
    if(x<y && x<z)
        return x;
    else if(y<z)
        return y;
    else return z;
}
int main()
{
    int a,b,c;
    float p,q,r;
    cout<<("Enter three integers : ");
    cin>>a>>b>>c;
    cout<<("Enter three floats : ");
    cin>>p>>q>>r;
    cout<<("The smallest integer is : ")<<min(a,b,c);
    cout<<("\nThe smallest float is : ")<<min(p,q,r);
    return 9;
}
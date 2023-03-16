#include<iostream>
using namespace std;
class complex
{
    int r,i;
    public:
        complex(int r=0, int i=0)
        {                                                                  //yet to commit
        this ->r=r;
        this ->i=i;
        }
        //friend istream &operator>>(istream &in, complex c);
        friend ostream &operator<<(ostream &out, complex c);
};
// istream &operator>>(istream &in, complex c)
// {
//     cout<<("Enter a complex number separated by spaces : ");
//     in>>c.r>>c.i;
//     return in;
// }
ostream &operator<<(ostream &out, complex c)
{
    out<<c.r<<" + "<<c.i<<"i";
    return out;
}
int main()
{
    
    complex c(3,6);
    //cin>>c;
    cout<<c;
    //operator<<(cout,c);
}
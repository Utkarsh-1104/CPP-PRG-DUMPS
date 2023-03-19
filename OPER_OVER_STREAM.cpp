#include<iostream>
using namespace std;
class complex
{
    int r,i;
    public:
      /* complex(int p=0, int q=0)
        {                                                                  //yet to commit
        r=p;
        i=q;
        }*/
        friend void operator>>(istream &, complex &);
        friend void operator<<(ostream &, complex);
};
void operator>>(istream &in, complex &c)
{
    cout<<("Enter a complex number separated by spaces : ");
    in>>c.r>>c.i;
}
void operator<<(ostream &out, complex c)
{
    out<<c.r<<" + "<<c.i<<"i";
}
int main()
{
    
    complex c;
    cin>>c;
    cout<<c;
   }
#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
        void setreal (int real);
        void setimg (int img);
        int getreal ();
        int getimg ();
        complex operator+ (complex c);
        void ans(complex ans);
};
void complex :: setreal(int real)
{
    this->real = real;
}
void complex :: setimg(int img)
{
    this->img = img;
}
int complex :: getreal()
{
    return this->real;
}
int complex :: getimg()
{
    return this->img;
}
complex complex :: operator+ (complex c)
{
    complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}
void complex :: ans(complex ans)
{
    cout<<("Sum of complex numbers is : ")<<ans.getreal()<<" + "<<ans.getimg()<<"i";
}
int main()
{
    complex c1,c2,c3;
    int r1,im1,r2,im2;
    cout<<("Enter a complex number separated by spaces : ");
    cin>>r1>>im1;
    c1.setreal(r1); c1.setimg(im1);
    cout<<("Enter another complex number separated by spaces : ");
    cin>>r2>>im2;
    c2.setreal(r2); c2.setimg(im2);
    c3 = c2+c1;
    c3.ans(c3);
    return 0;
}
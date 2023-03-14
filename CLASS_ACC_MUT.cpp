#include<iostream>
using namespace std;
class rec
{
    private:
        float len, bred;
    public:
        void setl(int l)
        {
            if(l>0)
                len = l;
            else
            {
                cout<<("Invalid input.....");
                len=0;
            }
        }
        void setb(int b)
        {
            if(b>0)
                bred = b;
            else
            {
                cout<<("Invalid input.....");
                bred=0;
            }
        }
        int getl()
        {
            return len;
        }
        int getb()
        {
            return bred;
        }
        int area()
        {
            return len*bred;
        }
        int perimeter()
        {
            return 2*(len+bred);
        }
};
int main()
{
    rec r;
    int l,b;
    cout<<("Enter the length of the rectangle : ");
    cin>>l;
    cout<<("Enter the breadth of the rectangle : ");
    cin>>b;
    r.setl(l); r.setb(b);
    cout<<("\nLength is : ")<<r.getl();
    cout<<("\nBreadth is : ")<<r.getb();
    cout<<("\nThe area of the rectangle is : ")<<r.area();
    cout<<("\nThe perimeter of the rectangle is : ")<<r.perimeter();
}
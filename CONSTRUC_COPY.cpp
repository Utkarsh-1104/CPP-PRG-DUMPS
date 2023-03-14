#include<iostream>
using namespace std;
class rec
{
    private:
        float len, bred;
    public:
        rec(int l=1, int b=1)
        {
            setl(l);
            setb(b);
        }
        rec(rec &r)
        {
            len = r.len;
            bred = r.bred;
        }
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
    rec r1(10,5);
    rec r2(r1);
    cout<<r1.area()<<endl;
    cout<<r2.area();
}
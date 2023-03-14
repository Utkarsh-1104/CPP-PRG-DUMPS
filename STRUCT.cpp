#include<iostream>
using namespace std;
struct demo
{
    private:
        int a,b;
    public:
        void seta(int x)
        {
            a=x;
        }
        void setb(int y)
        {
            b=y;
        }
        void swap()
        {
            int t=a;
            a=b;
            b=t;
            cout<<a<<" "<<b;
        }
};
int main()
{
    demo d;
    d.seta(10);
    d.setb(5);
    d.swap();
}
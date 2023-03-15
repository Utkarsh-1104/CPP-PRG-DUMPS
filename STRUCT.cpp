#include<iostream>
using namespace std;
struct demo
{
    private:
        int a,b;
    public:
        void seta(int x);
        void setb(int y);
        void swap();
};
void demo :: seta(int x)
{
    a=x;
}
void demo :: setb(int y)
{
    b=y;
}
void demo :: swap()
{
    int t=a;
    a=b;
    b=t;
    cout<<a<<" "<<b;
}
int main()
{
    demo d;
    d.seta(10);
    d.setb(5);
    d.swap();
}
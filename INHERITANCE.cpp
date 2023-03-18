#include<iostream>
using namespace std;
class rec
{
    int len,bred;
    public:
        rec(int l=1, int b=1)
        {
            len=l; bred=b;
        }
        void setl();
        void setb();
        int getl();
        int getb();
        int area();
        void showarea(int area);
};
class cuboid : public rec
{
    int ht;
    public:
        cuboid(int h=1){ht=h;};
        void seth();
        int geth();
        int vol();
        void showvol(int v);
};
int main()
{
    rec r; cuboid c;     
    r.setl(); r.setb();
    cout<<("The length is : ")<<r.getl();
    cout<<("\nThe breadth is : ")<<r.getb();
    int area = r.area();
    r.showarea(area);
    c.setl(); c.setb(); c.seth();
    int v = c.vol();
    c.showvol(v);
}
//fucntion initialization of class rec
void rec :: setl(){int l; cout<<("\nEnter the length : "); cin>>l;len = l;}
void rec :: setb(){int b; cout<<("\nEnter the breadth : "); cin>>b;bred = b;}
int rec :: getl(){return len;}
int rec :: getb(){return bred;}
int rec :: area(){return len * bred;}
void rec :: showarea(int area){cout<<("\nThe area of the rectangle is : ")<<area;}
//function initialization of class cuboid
void cuboid :: seth(){int h; cout<<("\nEnter the height : "); cin>>h;ht =h;}
int cuboid :: geth(){return ht;}
int cuboid :: vol(){return getl()*getb()*ht;}
void cuboid :: showvol(int v){cout<<("\nThe volume of the cuboid is : ")<<v;}
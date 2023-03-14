#include<iostream>
using namespace std;
class rec
{
    public:
        float length, breadth;
        float area()
        {
            return length*breadth;
        }
        float perimeter()
        {
            return 2*(length+breadth);
        }
};
int main()
{
    // rec *p;
    // p = new rec;
    rec *p = new rec();
    cout<<("Enter the length and breadth of the rectangle : ");
    cin>>p->length>>p->breadth;
    cout<<("The area of the rectangle is : ")<<p->area();
    cout<<("\nThe perimeter of the rectangle is : ")<<p->perimeter();
}
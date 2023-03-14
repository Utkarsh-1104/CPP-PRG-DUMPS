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
    rec r1,r2;
    cout<<("Enter the length and breadth of the rectangle : ");
    cin>>r1.length>>r1.breadth;
    cout<<("The area of the rectangle is : ")<<r1.area();
    cout<<("\nThe perimeter of the rectangle is : ")<<r1.perimeter();
    cout<<("\n\nEnter the length and breadth of another rectangle : ");
    cin>>r2.length>>r2.breadth;
    cout<<("The area of the rectangle is : ")<<r2.area();
    cout<<("\nThe perimeter of the rectangle is : ")<<r2.perimeter();
}
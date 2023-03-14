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
    rec r;
    rec *ptr = &r;
    cout<<("Enter the length and breadth of the rectangle : ");
    cin>>ptr->length>>ptr->breadth;
    cout<<("The area of the rectangle is : ")<<ptr->area();
    cout<<("\nThe perimeter of the rectangle is : ")<<ptr->perimeter();
}
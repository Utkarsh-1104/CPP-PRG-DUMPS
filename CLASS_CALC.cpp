#include<iostream>
using namespace std;
class calc
{
    public:
        float num1, num2;
        float add()
        {
            return num1+num2;
        }
        float sub()
        {
            return num1-num2;
        }
        float mult()
        {
            return num1*num2;
        }
        float div()
        {
            if(num2!=0)
                return num1/num2;
            else
            {
                cout<<("Math error....");
                return num1*num2;
            }
        }
};
int main()
{
    calc a;
    cout<<("Enter two numbers : ");
    cin>>a.num1>>a.num2;
    cout<<("\nThe sum of numbers is : ")<<a.add();
    cout<<("\nThe difference of numbers is : ")<<a.sub();
    cout<<("\nThe product of numbers is : ")<<a.mult();
    cout<<("\nThe quotient of numbers is : ")<<a.div();
}
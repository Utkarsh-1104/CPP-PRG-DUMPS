#include<iostream>
using namespace std;
int main()
{
    int op,a,b;
    cout<<("Add : 1\n")<<("Subtract : 2\n")<<("Multiply : 3\n")<<("Divide :4\n");
    cin>>op;
    cout<<("Enter two numbers : ");
    cin>>a>>b;
    switch(op)
    {
        case 1: cout<<("The sum of ")<<a<<(" and ")<<b<<(" is : ")<<(float)a+b;
            break;
        case 2: cout<<("The difference of ")<<a<<(" and ")<<b<<(" is : ")<<(float)a-b;
            break;
        case 3: cout<<("The product of ")<<a<<(" and ")<<b<<(" is : ")<<(float)a*b;
            break;
        case 4: if(b!=0)
                    cout<<("The quotient of ")<<a<<(" and ")<<b<<(" is : ")<<(float)a/b;
                else
                    cout<<("Math error.");
            break;
    }
    return 0;
}

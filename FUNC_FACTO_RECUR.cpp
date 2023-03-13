#include<iostream>
using namespace std;
int fact(int a)
{
    if(a==0)
        return 1;
    return (a * fact(a-1));
}
int main()
{
    int num;
    cout<<("Enter a number : ");
    cin>>num;
    //int ans = fact(num);
    cout<<("The factorial of the number is : ")<<fact(num);
    return 0;
}
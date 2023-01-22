#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<("Enter an age : ");
    cin>>age;
    if(age>0)
    {
        if(age>=1 && age<35)
            cout<<("The person is young.");
        else
            cout<<("The person is old.");
    }
    else
        cout<<("Enter an appropriate age.");
    return 0;
}

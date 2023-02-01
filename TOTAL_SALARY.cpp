#include<iostream>
using namespace std;
int main()
{
    float basic;
    int tsalary;
    char grd;
    cout<<("Enter the basic salary : ");
    cin>>basic;
    cout<<("Enter the grade : ");
    cin>>grd;
    if(grd == 'A' || grd =='a')
    {
        tsalary = basic + ((basic*2)/10) + (basic/2) + 1700 - ((basic*11)/100);
        cout<<("The total salary is : ")<<tsalary;
    }
    else if(grd == 'B' || grd == 'b')
    {
        tsalary = basic + ((basic*2)/10) + (basic/2) + 1500 - ((basic*11)/100);
        cout<<("The total salary is : ")<<tsalary;
    }
    else
    {
        tsalary = basic + ((basic*2)/10) + (basic/2) + 1300 - ((basic*11)/100);
        cout<<("The total salary is : ")<<tsalary;
    }
}
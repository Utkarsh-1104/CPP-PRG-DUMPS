#include<iostream>
using namespace std;
int main()
{
    float ns,bs,allow,deduc;
    cout<<("Enter the basic salary, percentage of allowances and percentage of deductions respectively : ");
    cin>>bs>>allow>>deduc;
    ns = bs + (bs*allow/100) - (bs*deduc/100);
    cout<<("The net salary is : ")<<ns;
    return 0;
}

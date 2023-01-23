#include<iostream>
using namespace std;
enum {mon=1,tue,wed,thu,fri,sat};
int main()
{
    int a;
    cout<<("Enter which number of day : ");
    cin>>a;
    switch(a)
    {
        case 1: cout<<("Monday.");
            break;
        case 2: cout<<("Tuesday.");
            break;
        case 3: cout<<("Wednesday.");
            break;
        case 4: cout<<("Thursday.");
            break;
        case 5: cout<<("Friday.");
            break;
        case 6: cout<<("Saturday.");
            break;
        case 7: cout<<("Sunday.");
            break;

    }
    return 0;
}

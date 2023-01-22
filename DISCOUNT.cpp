#include<iostream>
using namespace std;
int main()
{
    int bill;
    cout<<("Enter the bill amount : ");
    cin>>bill;
    switch(bill)
    {
        case bill<100: cout<<("No discount.");
            break;
        case bill>=100 && bill<500: cout<<("10% discount that is ")<<bill-(bill/10);
            break;
        case bill>=500: cout<<("20% discount that is ")<<bill-bill/5;
            break;
    }
    return 0;
}

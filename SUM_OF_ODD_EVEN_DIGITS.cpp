#include<iostream>
using namespace std;
int main()
{
    int n,i,sum_odd=0,sum_even=0;
    cout<<("Enter an integer : ");
    cin>>n;
    while(n!=0)
    {
        i = n%10;
        n/=10;
        if(i%2==0)
            sum_even+=i;
        else
            sum_odd+=i;
    }
    cout<<("The sum of even digits of the number is : ")<<sum_even;
    cout<<("\nThe sum of odd digits of the number is : ")<<sum_odd;
    return 0;
}
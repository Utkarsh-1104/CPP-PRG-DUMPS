#include<iostream>
using namespace std;
int main()
{
    int sum,n;
    cout<<("Enter how many numbers you want the sum of : ");
    cin>>n;
    sum = n*(n+1)/2;
    cout<<("The sum of first ")<<n<<(" natural numbers are : ")<<sum;
    return 0;
}

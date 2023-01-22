#include<iostream>
using namespace std;
int main()
{
    int n,m,rev,i;
    cout<<("Enter a number : ");
    cin>>n;
    m=n;
    rev = 0;
    while(n!=0)
    {
        i=n%10;
        n/=10;
        rev=rev*10+i;
    }
    cout<<("The reverse of the number is : ")<<rev<<endl;
    if(rev==m)
        cout<<("It is a palindrome.");
    else
        cout<<("It is not a palindrome");
    return 0;
}

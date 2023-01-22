#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<("Enter a number : ");
    cin>>n;
    cout<<("The table of ")<<n<<(" is : \n");
    for(int i=1; i<=10; i++)
        cout<<n<<("*")<<i<<("=")<<n*i<<endl;
    return 0;
}

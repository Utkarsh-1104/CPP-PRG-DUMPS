#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<("Enter n : ");
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        int j=1;
        int value = i;
        while(i>=j)
        {
            j+=1;
            cout<<value;
            value+=1;
        }
        cout<<endl;
        i+=1;
    }
}
#include<iostream>
using namespace std;
int main()
{
    int i;
    float avg=0;
    cout<<("Enter the number of the elements of the array : ");
    cin>>i;
    int A[i];
    for(auto& x:A)
        cin>>x;
    for(auto x:A)
        avg+=x;
    avg/=i;
    cout<<("The average of the elements of the array is : ")<<avg;
    return 0;
}
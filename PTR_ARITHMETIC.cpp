#include<iostream>
using namespace std;
int main()
{
    int A[5] = {1,2,3,4,5};
    int *p = A, *q = &A[4];
    cout<<p++<<endl;
    cout<<p+2<<endl;
    cout<<q-p<<endl;
    cout<<*p++<<endl;
    cout<<*p+2;
}
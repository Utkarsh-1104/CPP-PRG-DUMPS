#include<iostream>
using namespace std;
int * fun(int n) 
{
    int *p = new int[n];
    for(int i=0; i<n; i++)
        p[i] = i+1;
    return p;
}
int main()
{
    int *ptr=fun(5);
    for(int i=0; i<5; i++)
        cout<<ptr[i]<<" ";
    return 0;
}
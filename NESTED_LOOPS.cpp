#include<iostream>
using namespace std;
int main()
{
    for(int i=1; i<7; i++)
    {
        for(int j=1; j<7; j++)
            cout<<("(")<<i<<","<<j<<(") ");
        cout<<endl;
    }
    return 0;
}
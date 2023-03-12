#include<iostream>
using namespace std;
int max(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int min(int x, int y)
{
    if(x<y)
        return x;
    else
        return y;
}
int main()
{
    int (*fp)(int, int);
    fp = max;
    int n = (*fp)(10,5);
    cout<<n<<endl;
    fp = min;
    int a = (*fp)(10,5);
    cout<<a;
}

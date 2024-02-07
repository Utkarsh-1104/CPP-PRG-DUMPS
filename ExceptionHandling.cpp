#include<iostream>
using namespace std;

int main() {
    int a,b,c,x;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    try
    {
        x = a-b;
        if(x!=0) {
            cout<<"Result is : "<<c/x;
        }
        else {
            throw(x);
        
        }
        
    }
    catch(int t)
    {
        cout<<"Division by zero is not allowed";
        cout<<"\nException caught a-b = "<<t;
    }
    
}
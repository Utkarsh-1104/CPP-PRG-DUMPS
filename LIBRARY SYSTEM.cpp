#include<iostream>
using namespace std;
int issue();
int main()
{
    cout<<("....................WELCOME TO LIBRARY SYSTEM....................\n");
    cout<<("To issue a book press : 1\n");
    cout<<("To reissue a book press : 2\n");
    cout<<("To submit a book press : 3\n");
    cout<<("To exit press : 4\n");
    int a;
    cout<<("Enter your choice : ");
    cin>>a;
    if(a==1)
    {
        cout<<("Issue\n");
        issue();
    }
    else if(a==2)
    {
        cout<<("reissue");
    }
    else if(a==3)
    {
        cout<<("submit");
    }
    else if(a==4)
    {
        cout<<("exit");
    }
    else
        cout<<("Invalid choice... Please enter again.");
    return 0;
}
int issue()
{
    int b;
    cout<<("Enter the subject from the given choices : \n");
    cout<<("Mathematics 1\nPhysics\nBasic Mechanical Engineering\nBasic Computer Engineering\nBasic Civil Engineering.\n");
    cout<<("Enter your choice : ");
    cin>>b;
    return 0;
}

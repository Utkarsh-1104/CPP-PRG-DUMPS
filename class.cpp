#include<iostream>
using namespace std;
class student
{
private:
    int roll_no;
    char name[20];
public:
    void input();
    void output();
};
void student::input()
{
    cout<<("Enter the name and rollno of a student : ");
    cin>>name>>roll_no;
}
void student::output()
{
    cout<<("Name of student : ")<<name<<("\n");
    cout<<("Roll no of student is : ")<<roll_no<<("\n");
}
int main()
{
    student s;
    s.input();
    s.output();
    return 0;
}

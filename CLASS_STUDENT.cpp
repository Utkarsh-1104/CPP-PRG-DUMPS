#include<iostream>
using namespace std;
class student
{
    int rollnum,m1,m2,m3;
    string name;
    public:
        void setrollnum(int r);
        void setmarks(int ma1, int ma2, int ma3);
        int totalmarks();
        char grade();
};
void student :: setrollnum(int r)
{
    rollnum=r;
}
void student :: setmarks(int ma1, int ma2, int ma3)
{
    m1=ma1; m2=ma2; m3=ma3;
}
int student :: totalmarks()
{
    return m1+m2+m3;
}
char student :: grade()
{
    float per = (m1+m2+m3)/3;
    return per>80?'A':80>per>60?'B':60>per>40?'C':'D';
}
int main()
{
    student stu;
    int rn,mar1,mar2,mar3;
    cout<<("Enter the rollnumber of the student : ");
    cin>>rn;
    stu.setrollnum(rn);
    cout<<("Enter the marks of three subjects : ");
    cin>>mar1>>mar2>>mar3;
    stu.setmarks(mar1, mar2, mar3);
    cout<<("Total marks of the student is  : ")<<stu.totalmarks();
    cout<<("\nGrade if the student is : ")<<stu.grade();
    return 0;
}
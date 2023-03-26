#include<iostream>
#include<string>
using namespace std;
//grandfather class student
class student
{
private:
    int rn;
    string name;
public:
    void getdata();
    void putdata();
};
void student::getdata()
{
    cout<<"Enter Roll Nunber: ";
    cin>>rn;
    fflush(stdin);
    cout<<"Enter Name: ";
    getline(cin, name);
}
void student::putdata()
{
    cout<<"\n\n***** Details of the Student *****\n\n";
    cout<<"Roll Number : "<<rn;
    cout<<"\nName : "<<name;
}
//father class marks inherited from student
class marks : virtual public student
{
    protected:
        int m1, m2, m3;
    public:
        void getmarks();
        void putmarks();
};
void marks::getmarks()
{
    getdata();
    cout<<"Enter Three Marks : ";
    cin>>m1>>m2>>m3;
}
void marks::putmarks()
{
    putdata();
    cout<<"\nMarks : "<<m1<<"\t"<<m2<<"\t"<<m3;
}
//mother class activity inherited from student
class activity : public virtual student
{
    protected:
        int sp, gd;
    public:
        void getact();
        void putact();
};
void activity::getact()
{
    cout<<"Enter Two activity Marks : ";
    cin>>sp>>gd;
}
void activity::putact()
{
    cout<<"\nActivity Marks : "<<sp<<"\t"<<gd;
}
//child class result inherited from both marks and activity
class result : public marks, public activity
{
    int totalm, totalact;
    float perm, peract;
    char gram, gract;
    public:
        void getd();
        void process();
        void display();
};
void result::getd()
{
    getmarks();
    getact();
}
void result::process()
{
    totalm=m1+m2+m3;
    totalact=sp+gd;
    perm=totalm/float(3);
    peract=totalact/2.0;
}
void result::display()
{
    putmarks();
    putact();
    cout<<"\nTotal Marks: "<<totalm;
    cout<<"\nTotal Activity Marks: "<<totalact;
    cout<<"\nPercentage of Marks: "<<perm;
    cout<<"\nPercentage of Activity Marks: "<<peract;
}
//main
int main()
{
    result r;
    r.getd();
    r.process();
    r.display();
    return 0;
}
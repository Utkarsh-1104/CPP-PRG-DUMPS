#include<iostream>
#include<string>
using namespace std;
class emp
{
    protected:
        string ename;
        int eid;
    public:
        void setename();
        int seteid();
};

class fullemp : public emp
{
    private:
        int salary;
    public:
        void setsalary();
        void getsalary();
        void getename();
        void geteid();
};

class partemp : public emp
{
    private:
        int wage;
    public:
        void setwage();
        void getwage();
        void getename();
        void geteid();
};

int main()
{
    fullemp f; partemp p;
    f.setename(); f.seteid();
    f.getename(); f.geteid();
    f.setsalary(); f.getsalary();
    p.setename(); p.seteid();
    p.getename(); p.geteid();
    p.setwage(); p.getwage();
    return 0;
}
//function initialization of emp class
void emp :: setename()
{cout<<("\nEnter the name of the employee : "); getline(cin, ename);}

int emp :: seteid()
{cout<<("\nEnter the id of the employee : "); cin>>eid;}


//function initialization of fullemp class
void fullemp :: setsalary()
{cout<<("\nEnter the salary : "); cin>>salary;}

void fullemp :: getsalary()
{cout<<("\nThe salary of full time employee is : ")<<salary;}

void fullemp :: getename()
{cout<<("\nThe name of full time employee is : ")<<ename;}

void fullemp :: geteid()
{cout<<("\nThe id of full time employee is : ")<<eid;}

//function initialization of partemp class
void partemp :: setwage()
{cout<<("\nEnter the wage : "); cin>>wage;}

void partemp :: getwage()
{cout<<("The wage of part time employee is : ")<<wage;}

void partemp :: getename()
{cout<<("\nThe name of part time employee is : ")<<ename;}

void partemp :: geteid()
{cout<<("\nThe id of part time employee is : ")<<eid;}


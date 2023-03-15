#include<iostream>
using namespace std;
class rational
{
    int p,q;
    public:
        void setp(int p);
        void setq(int q);
        friend rational operator+(rational p1, rational p2);
        friend ostream &operator<<(ostream &out, rational p3);
};
int main()
{
    rational r1,r2,r3;
    int p1,q1,p2,q2;
    cout<<("Enter the numerator and denominator of first rational number : ");
    cin>>p1>>q1;
    r1.setp(p1); r1.setq(q1);
    cout<<("Enter the numerator and denominator of second rational number : ");
    cin>>p2>>q2;
    r2.setp(p2); r2.setq(q2);
    r3 = r1+r2;
    cout<<("The sum of ")<<r1<<" and "<<r2<<" is : "<<r3;
}
void rational :: setp(int p)
{
    this ->p=p;
}
void rational :: setq(int q)
{
    this ->q=q;
}
rational operator+(rational p1, rational p2)
{
    rational pq;
    pq.p = p1.p*p2.q + p2.p*p1.q;
    pq.q = p1.q * p2.q;
    return pq;
}
ostream &operator<<(ostream &out, rational r)
{
    cout<<r.p<<"/"<<r.q;
    return out;
}
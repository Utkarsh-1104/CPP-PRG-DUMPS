#include<iostream>
using namespace std;

class distanceFeetandInches {
    private:
        int feet, inch;
    public:
        void getdata();
        void putdata();
        void add(distanceFeetandInches, distanceFeetandInches);
};

void distanceFeetandInches :: getdata() {
    cout<<"Enter feet and inches respectively : ";
    cin>>feet>>inch;
}

void distanceFeetandInches :: putdata() {
    cout<<feet<<" feet and "<<inch<<" inches";
}

void distanceFeetandInches :: add(distanceFeetandInches x, distanceFeetandInches y) {
    inch = x.inch + y.inch;
    feet = x.feet + y.feet + inch/12;
    inch = inch%12;
}

int main() {
    distanceFeetandInches d1, d2, d3;
    d1.getdata();
    d2.getdata();
    d3.add(d1, d2);
    cout<<"Distance 1 : "; 
    d1.putdata();
    cout<<"\nDistance 2 : "; 
    d2.putdata();
    cout<<"\nSum of distances : "; 
    d3.putdata();
    return 0;
}
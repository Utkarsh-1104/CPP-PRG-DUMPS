#include<iostream>
using namespace std;

class distanceFeetandInches {
    private:
        int feet, inch;
    public:
        distanceFeetandInches(){};
        distanceFeetandInches(int, int);
        void getdata();
        void putdata();
        void add(distanceFeetandInches, distanceFeetandInches);
};

distanceFeetandInches :: distanceFeetandInches(int f, int i) {
    feet = f;
    inch = i;
}

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
    // d1.getdata();
    // d2.getdata();            giving input maunally using getdata()
    // d3.add(d1, d2);
    distanceFeetandInches d1(5, 6);
    distanceFeetandInches d2(4, 8);        // giving input using constructor
    distanceFeetandInches d3;
    d3.add(d1, d2); 
    cout<<"Distance 1 : "; 
    d1.putdata();
    cout<<"\nDistance 2 : "; 
    d2.putdata();
    cout<<"\nSum of distances : "; 
    d3.putdata();
    return 0;
}
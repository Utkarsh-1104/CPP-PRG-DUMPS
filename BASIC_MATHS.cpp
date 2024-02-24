#include<iostream>
using namespace std;

//count digits
int countDigits() {
    int n;
    cin>>n;
    int counts=0;
    if (n == 0) {
        return 1;
    }
    else {
        while (n!=0) {
            n/=10;
            counts++;
        }
        return counts;
    }
}

int main() {
    cout<<countDigits();
}
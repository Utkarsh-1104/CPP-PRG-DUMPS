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

//GCD or HCF
//brute force
// int GCD() {
//     int m,n;
//     cin>>m>>n;
//     int min;
//     int gcd=1;
//     (m>n) ? min = n : min = m;
//     for (int i = 1; i <= min; i++)
//     {
//         if (m % i == 0 && n % i == 0) gcd = i;
//     }
//     return gcd;
// }

//euclid's algo
int GCD(int n, int m) {
    if (m==0)
        return n;
    return GCD(m, n % m);
}

int main() {
    cout<<countDigits()<<endl;
    cout<<GCD(3, 2);
}
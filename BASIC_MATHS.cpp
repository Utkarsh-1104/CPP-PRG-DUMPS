#include<bits/stdc++.h>
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

//armstrong
bool checkArmstrong(){
    int n;
    cin>>n;
	int dup = n;
	int sum = 0;
	int power = int(log10(n) + 1);
	while(n != 0) {
		sum = pow(n % 10, power) + sum;
		n/=10;
	}
	if (sum == dup)
		return true;
	else
		return false;
}

//prime
bool isPrime(int n)
{
	int count = 0;
	for(int i = 1; i*i <= n; i++) {
		if(n % i == 0) {
			count++;
			if((n/i) != i) count++;
		}
	}
	if(count == 2) return true;
	else return false;
}

//reverse number
int reverse(int x) {
    long num = 0;
    while(x != 0) {
        num = num*10 + x%10;
        x/=10;
    }
    if(num>INT_MAX || num<INT_MIN) return 0;
    return int(num);
}

int main() {
    cout<<countDigits()<<endl;
    cout<<GCD(3, 2);
    cout<<checkArmstrong();
    cout<<isPrime(8);
    cout<<reverse(123);
}
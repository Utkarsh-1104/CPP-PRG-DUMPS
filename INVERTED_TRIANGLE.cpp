#include<iostream>
using namespace std;

// alternate method
// void TRIANGLE(int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i; j++)
//             cout<<" ";
//         for (int k = 0; k < 2*n-(2*i+1); k++)
//             cout<<"*";
//         for (int j = 0; j < i; j++)
//             cout<<" ";
//         cout<<endl;
//     }
// }

void TRIANGLE (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2*i; j++)
            cout<<" ";
        for (int k = 0; k < 2*n-(2*i+1); k++)
            cout<<"* ";
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the value of n : ";
    cin >> n;
    TRIANGLE(n);
    return 0;
}

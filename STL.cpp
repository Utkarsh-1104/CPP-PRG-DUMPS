#include<bits/stdc++.h>
using namespace std;

//Pairs
void pairs() {
    pair<int, int> p;
    cout<<"Enter the pair: ";
    cin>>p.first>>p.second;
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p.first + p.second<<endl;

    pair<int, pair<int, int>> p1;
    cout<<"Enter nested pair : ";
    cin>>p1.first>>p1.second.first>>p1.second.second;
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    pair<int, int> arr[2];
    cout<<"Enter the pair array: ";
    cin>>arr[0].first>>arr[0].second>>arr[1].first>>arr[1].second;
    cout<<arr[0].first<<" "<<arr[1].second<<endl;
}

int main() {
    pairs();
    return 0;
}
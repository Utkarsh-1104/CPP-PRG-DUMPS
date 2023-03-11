#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<("Enter the size of the array : ");
    cin>>size;
    int *p = new int[size];
    cout<<("Enter the elements of the array : ");
    for(int i=0; i<size; i++)
        cin>>p[i];
    for(int i=0; i<size; i++)
        cout<<p[i]<<" ";
    delete []p;
    int nsize;
    cout<<("\nEnter the new size of the array : ");
    cin>>nsize;
    p = new int[nsize];
    cout<<("Enter the elements of the new array : ");
    for(int i=0; i<nsize; i++)
        cin>>p[i];
    cout<<"gyrffg";
    for(int i=0; i<nsize; i++)
        cout<<p[i]<<" ";
    return 0;
}

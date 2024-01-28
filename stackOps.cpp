#include<iostream>
using namespace std;

int choice, top = -1, stack[4];
void push();
void pop();
void traverse();

int main() {
    do {
        cout<<"\n**********STACK OPERATIONS**********\n";
        cout<<"\n1. Push\n2. Pop\n3. Traverse\n4. Exit\nEnter your choice : ";
        cin>>choice;
        switch(choice) {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: traverse();
                    break;
            case 4: exit(0);
        }
    } while(choice != 4);
}

void push() {
    if(top == 3) {
        cout<<"\nStack Overflow";
        return;
    }
    else {
        top++;
        cout<<"\nEnter the element : ";
        cin>>stack[top];
        cout<<"Element pushed at "<<top+1<<" position";
    }
}
void pop() {
    if(top == -1) {
        cout<<"\nStack Underflow";
        return;
    }
    else {
        cout<<"\nElement popped is : "<<stack[top];
        top--;
    }
}
void traverse() {
    if(top == -1) {
        cout<<"\nStack is empty";
        return;
    }
    else {
        cout<<"\nStack elements are : ";
        for(int i=top; i>=0; i--) {
            cout<<stack[i]<<" ";
        }
    }
}
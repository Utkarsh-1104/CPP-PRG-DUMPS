#include<iostream>
#include<cstdlib>
using namespace std;

struct node {
    int data;
    struct node *next;
};

typedef struct node NODE;
int main() {
    NODE *firstNode, *temp, *lastNode;
    int len;
    firstNode = NULL;
    lastNode = NULL;
    cout<<"Enter the length of Linked List : ";
    cin>>len;
    for(int i=0; i<len; i++) {
        temp = (NODE*)malloc(sizeof(NODE));
        cout<<"Enter the element of node "<<i+1<<" : ";
        cin>>temp -> data;
        if( firstNode == NULL ) {  
            firstNode = temp;
            lastNode = temp;
            temp -> next = NULL;
        }
        else {
            temp -> next = NULL;
            lastNode -> next = temp;
            lastNode = temp;
        }
    }
    temp = firstNode;
    int i = 1;
    while(temp != NULL) {
        cout<<"\nData of node "<<i<<" is : "<<temp -> data;
        temp = temp -> next;
        i++;
    }
}
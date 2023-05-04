#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    struct Node  *next;
};

void InsertionBegin(struct Node **ptr,int value){
    // step -1) make the new node 
     Node *p = new Node();
    p->data=value;
    //step-2) connect with the head 
p->next=*ptr;
//step-3) head points to the new node
*ptr=p;
}
//Insertion at end 
void InsertionEnd(struct node *ptr,int value){
    //step 1 make the new node 
    Node *p=new Node();
    //find the last node 
    while (ptr->next!=NULL)
    {
        /* code */
    }
    
}

void Traverse(struct Node *ptr){
    while(ptr!=NULL){
        cout<<"the element is "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}


int main(){
struct Node *head = new Node();
struct Node *second = new Node();
struct Node *third = new Node();



head->data=20;
head->next=second;

second->data=90;
second->next=third;
third->data=80;
third->next=NULL;

Traverse(head);
InsertionBegin(&head,89);
cout<<"after insetion at begin "<<endl;
Traverse(head);

    return 0;
}
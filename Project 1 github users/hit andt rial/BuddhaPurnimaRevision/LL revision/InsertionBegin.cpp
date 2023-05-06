#include<iostream>
using namespace std;

//making the class ]
class Node {
    public:
    int data;
    Node *next;
};
void InsertionBegin(Node **head,int value){
    //step-1) make the new node 
    Node *temp = new Node();
    temp->data=value;
    //step-2) point the new node to head 
    temp->next=*head;
    //step-3) point head to new node  
    *head=temp;
}

void Traverse(Node *head){
    while (head!=NULL)
    {
        cout<<"the element is "<< head->data<<endl;
        head=head->next;
    }
    
}



int main (){
Node * head = new Node();
Node * first = new Node();
Node * second = new Node ();
Node  * third = new Node ();

head->data= 10;
head->next= first;

first->data=20;
first->next=second;

second->data=30;
second->next=third;

third->data=40;
third->next=NULL;

Traverse(head);
InsertionBegin(&head,205);
InsertionBegin(&head,205);
cout<<"after insertion at begin"<<endl;
Traverse(head);
    return 0;
}
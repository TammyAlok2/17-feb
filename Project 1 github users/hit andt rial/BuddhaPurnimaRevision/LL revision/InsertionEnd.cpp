#include<iostream>
using namespace std;

//making the class 
class Node {
public:
int data;
Node *next;
}; 

void Traverse(Node *head){
    while (head!=NULL)
    {
        cout<<"the element is "<< head->data<<endl;
        head=head->next;
    }
    
}
void InsertionEnd(Node *head,int value){
    // step -1) make the new node
Node *temp= new Node();
temp->data=value;
temp->next=NULL;
// step-2) find the linked list is empty or not 
if(head->next==NULL){
head=temp;
return;
}
//find the last node of the linked list
else{
    while (head->next!=NULL)
    {
        head=head->next;

        /* code */
    }
    head->next=temp;
    
}
}
int main(){

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
InsertionEnd(head,205);
InsertionEnd(head,205);
cout<<"after insertion at end"<<endl;
Traverse(head);

    return 0;
}
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
void DeletionParticular(Node *head , int value){
 Node *p=head;
 Node *q = head->next;

 while(q->data!=value && q->next!=NULL){
p=p->next;
q=q->next;
 }
 p->next=q->next;
 cout<<"the deleted element is "<<q->data <<endl;
 free(q);

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
DeletionParticular(head,40);
cout<<"after deletion at particular element"<<endl;
Traverse(head);

    return 0;
}
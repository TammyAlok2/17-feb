#include<iostream>
using namespace std;

// making the new class 

class Node{
    public:
    int data ;
    Node *next;
};

void Traverse(Node *head){
    while (head!=NULL)
    {
        cout<<"the element is "<< head->data<<endl;
        head=head->next;
    }
}

void DeleteBegin(Node *head){
    // step-1) check the linked list is empty or not
    if(head->next==NULL){
        cout<<"insuffucient data to delete"<<endl;
    }
    // step -2) point head to head ->next

        Node *temp = head;
        head=head->next;
        free(temp);
    

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


cout<<"after deletion at begin"<<endl;
Traverse(head);

    return 0;
}
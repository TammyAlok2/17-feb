#include<iostream>
using namespace std;

//making the class for the linked list
class Node {
    public:
    int data;
    Node * next;
};


void Traverse (Node *head ){
    while(head!=NULL){
cout<<"the element is "<<head->data <<endl;
head=head->next;
    }
}

void Insertion(Node **head,int value){
    //make the new node 
    Node * temp = new Node();
    temp->data=value;
    //connect with the previous first node 
    temp->next= *head;
    *head = temp;
}


int main(){

    //making the node for the linked list
    Node * head =new Node();
    Node * second  = new Node ();
Node * third = new Node ();
    head->data=10;
    head->next=second;


second->data=29;
second->next = third;


third->data= 23;
third->next= NULL;                  

Traverse(head);
Insertion(&head,12);
cout<<"after insertion"<<endl;
Traverse(head);

    return 0;
}
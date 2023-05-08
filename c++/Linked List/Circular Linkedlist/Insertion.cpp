#include<iostream>
using namespace std;

//making the class for the linked list
class Node {
    public:
    int data;
    Node * next;
};


void Traverse (Node *head ){
    Node *temp = head;
    do
    {
        /* code */
        cout<<"the element is "<<temp->data<<endl;
        temp=temp->next;
    } while (temp!=head);
      
}


void Insertion(Node **head,int value){
    //make the new node 
    Node * ptr =*head;
    Node * temp = new Node();
    temp->data=value;
    while(ptr->next!=*head){
        ptr=ptr->next;
    }
    ptr->next=*head;
    *head=ptr;
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
third->next= head;                  

Traverse(head);
Insertion(&head,12);
cout<<"after insertion"<<endl;
Traverse(head);

    return 0;
}
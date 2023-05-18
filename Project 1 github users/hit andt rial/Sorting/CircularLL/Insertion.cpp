#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void Traverse(struct Node *head){
    struct Node *ptr=head;
    do
    {
 printf(" \n the element is %d",ptr->data);
 ptr=ptr->next;   
    } while (ptr!=head);
    
}

void DeletionBegin(struct Node *head){
    struct Node *ptr=head;
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    ptr->next = head->next;
    free(head);

}
void InsertionLast(struct Node *head , int data){
    struct Node *ptr=head;
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    struct Node *temp;
    temp=(struct Node *) malloc(sizeof(struct Node));
    ptr->next=temp;
    temp->data=data;
    temp->next=head;
}

int main(){
struct Node *head ;
head=(struct Node *) malloc(sizeof(struct Node));
struct Node *first;
first= (struct Node *) malloc(sizeof(struct Node));
struct Node *second ;
second=(struct Node *) malloc(sizeof(struct Node));
struct Node *third ;
third=(struct Node *) malloc(sizeof(struct Node));
struct Node *fourth ;
fourth=(struct Node *) malloc(sizeof(struct Node));

head->data=10;
head->next=second;

second->data=20;
second->next=third;

third->data=30;
third->next=fourth;
fourth->data=70;
fourth->next=head;

Traverse(head);

//InsertionLast(head,12);
DeletionBegin(head);
printf("\n after insertion begin");
Traverse(head);


    return 0;
}
#include<stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void Traverse(struct Node *head){
    struct Node *temp = head;
    do
    {
        /* code */
        printf(" \n the element is %d",temp->data);
        temp= temp->next;
    } while(temp!=head);
    
}

void insertLast(struct Node**head,int value){
    struct Node *ptr = *head;
    struct Node *temp ;
    temp = (struct Node *) malloc(sizeof(struct Node));
    temp->data = value;
    temp->next= NULL;
    while(ptr->next!=*head){
        ptr=ptr->next;
    }
    ptr->next = temp;
    temp->next= *head;
    
}
void insertBegin(struct Node**head,int value){
    struct Node *ptr = *head;
    struct Node *temp ;
    temp = (struct Node *) malloc(sizeof(struct Node));
    temp->data = value;
    temp->next= NULL;
    while(ptr->next!=*head){
        ptr=ptr->next;
    }
    ptr->next = temp;
    temp->next= *head;
    *head=temp;
    
}
void deleteBegin(struct Node *head){
    struct Node *p= head;
    struct Node *q;
    while(p->next!=head){
        p=p->next;
    }
    q=p->next;
    p->next=head->next;
    free(q);
}
void deleteLast(struct Node *head){
    struct Node*p = head;
 struct Node *q = head->next;   
    while(q->next!= head){
        q=q->next;
        p=p->next;
    }
    p->next = head;
free(q);
}
int main(){
    
struct Node *first;
first= (struct Node *) malloc(sizeof(struct Node));
struct Node *second ;
 second = (struct Node *) malloc(sizeof(struct Node));
 struct Node *third;
 third = (struct Node *) malloc(sizeof(struct Node));
struct Node *head = first;
 first->data= 10;
 first->next = second;
 second->data=20;
 second->next= third;
 third->data= 30;
 third->next= head;

 insertLast(&head,100);
 insertLast(&head,90);
 insertBegin(&head,1);
 insertBegin(&head,2);
 printf("\n after insertion \n ");
 Traverse(head);
 deleteBegin(head);


 printf("\n after deletion in the begin \n ");
 Traverse(head);

 
   return 0; 
}
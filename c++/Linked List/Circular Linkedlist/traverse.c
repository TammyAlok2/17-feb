#include<stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
void Traverse(struct node *head){
    struct node *temp = head;
    do
    {
        /* code */
        printf(" \n the element is %d",temp->data);
        temp= temp->next;
    } while(temp!=head);
    
}

void insertLast(struct node**head,int value){
    struct node *ptr = *head;
    struct node *temp ;
    temp = (struct node *) malloc(sizeof(struct node));
    temp->data = value;
    temp->next= NULL;
    while(ptr->next!=*head){
        ptr=ptr->next;
    }
    ptr->next = temp;
    temp->next= *head;
    
}
void insertBegin(struct node**head,int value){
    struct node *ptr = *head;
    struct node *temp ;
    temp = (struct node *) malloc(sizeof(struct node));
    temp->data = value;
    temp->next= NULL;
    while(ptr->next!=*head){
        ptr=ptr->next;
    }
    ptr->next = temp;
    temp->next= *head;
    *head=temp;
    
}
void deleteBegin(struct node *head){
    struct node *p= head;
    while(p->next!=head){
        p=p->next;
    }
    p->next=head->next;
    
    head = p->next;
}
void deleteLast(struct node *head){
    struct node*p = head;
 struct node *q = head->next;   
    while(q->next!= head){
        q=q->next;
        p=p->next;
    }
    p->next = head;

free(q);
}
int main(){
    
struct node *first;
first= (struct node *) malloc(sizeof(struct node));
struct node *second ;
 second = (struct node *) malloc(sizeof(struct node));
 struct node *third;
 third = (struct node *) malloc(sizeof(struct node));
struct node *head = first;
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
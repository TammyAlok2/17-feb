#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void Traverse(struct node *head)
{
    while (head != NULL)
    {
        printf("the element is %d \n ", head->data);
        head = head->next;
    }
}
void InsertBegin(struct node **head, int value)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = value;
    temp->next = *head;
    *head = temp;
}
void InsertLast(struct node *head, int value)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = value;
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = temp;
    temp->prev = head;
    temp->next = NULL;
    head = temp;
}
void deleteLast(struct node *head){
    if(head==NULL)
    {
        printf("Linked list is empty");
    }
    else
    {
        struct node *temp = head;
        head = head->next;
        head->prev=NULL;
        free(temp);
    }
}

int main()
{
    struct node *first;
    struct node *second;
    struct node *third;
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    first->data = 10;
    first->prev = NULL;
    first->next = second;

    second->data = 20;
    second->next = third;
    second->prev = first;

    third->data = 30;
    third->next = NULL;
    third->prev = second;

    Traverse(first);
    InsertBegin(&first, 100);
    InsertBegin(&first, 80);
    InsertLast(&first, 90);
    deleteLast(first);
 deleteLast(first);
    printf("\n after insertion begin \n");
    Traverse(first);
    return 0;
}
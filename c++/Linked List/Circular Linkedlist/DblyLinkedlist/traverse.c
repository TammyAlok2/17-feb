#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
void Traverse(struct Node *head)
{
    while (head != NULL)
    {
        printf("the element is %d \n ", head->data);
        head = head->next;
    }
}
void InsertBegin(struct Node **head, int value)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->prev = NULL;
    temp->data = value;
    temp->next = *head;
    *head = temp;
}
void InsertLast(struct Node *head, int value)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
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
void deleteLast(struct Node *head){
    if(head==NULL)
    {
        printf("Linked list is empty");
    }
    else
    {
        struct Node *temp = head;
        head = head->next;
        head->prev=NULL;
        free(temp);
    }
}

int main()
{
    struct Node *first;
    struct Node *second;
    struct Node *third;
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
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
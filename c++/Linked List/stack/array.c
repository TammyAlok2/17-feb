#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;
    /* data */
};

int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *ptr ,int val){
    if(isFull(ptr)){
        printf("the stack is full ");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

int pop(struct stack *ptr){
    if(isEmpty(ptr))
    {
        printf("the stack is empty no elements to pop ");
    return -1;
    }
    else
    {
  int val = ptr->arr[ptr->top];
  ptr->top--;
  return val; 

    }
}

int main (){
struct stack *s ;
s->arr= (int *) malloc(sizeof(int));
s->size= 5;
s->top=-1;

push(s,10);
push(s,20);
push(s,30);
pop(s);
pop(s);




    return 0;
}
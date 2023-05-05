#include<stdio.h>
#include<stdlib.h>
struct Stack {
    int size;
    int *arr;
    int top;
};

//checking stack is empty or not
int isEmpty(struct Stack *ptr){
    if(ptr->top==1){
        return 1;
    }
    else{
        return 0;
    }
}

// checking the stack is full or not
int isFull(struct Stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void Push(struct Stack *ptr,int value){
    if(isFull(ptr))
    {
      printf("the stack is overflow \n ");
       
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
      
    }
}

int Pop(struct Stack *ptr){
    if(isEmpty(ptr)){
        printf("the stack is underflow");
        return 1 ;
    }
    else {
        int data = ptr->arr[ptr->top];
        ptr->top--;
        ptr->arr[ptr->top];
        return data;
    }
}

int peek(struct Stack *s, int i)
{
    int arrIndex = s->top - i + 1;
    if (arrIndex < 0)
    {
        printf("invalid index plz correct");
    }
    else
    {
        return s->arr[arrIndex];
    }
}

int main()
{
    struct Stack *s;
    s= ((struct Stack *) malloc(sizeof(struct Stack)));
    s->size=5;
    s->arr=(int *)malloc(sizeof(int));
s->top=-1;

s->top++;
s->arr[s->top]=10;

s->top++;
s->arr[s->top]=100;

s->top++;
s->arr[s->top]=1000;

Push(s,85);
Push(s,789);

Pop(s);

Pop(s);
Pop(s);
    for(int j=1;j<=s->top+1;j++)
    {
        printf("\n The position is %d and element is %d",j,peek(s,j));
    }

    return 0;
}
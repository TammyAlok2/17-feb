#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int front;
    int rear;
    int size;
    int *arr;
};
int isEmpty(struct Queue *ptr){
    if(ptr->front == ptr->rear)
    {
return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct Queue *ptr){
    if(ptr->rear == ptr->size-1 ){
        return 1;
    }
    else{
        return 0;
    }
}

void Enque(struct Queue * ptr,int value){
    if(isFull(ptr)){
        printf("the queue is full no element can be added \n ");
    }
    else{
        ptr->rear++;
        ptr->arr[ptr->rear] = value;
    }
}
int main()
{
struct Queue *q;
q->size = 5;
q->front = q->rear = -1;
q->arr=(int *) malloc(sizeof(int));
Enque(q,10);
Enque(q,12);jjhj
m



    return 0;
}
#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue q){
    if(q.f==q.r){
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(struct queue q){
    if(q.f==q.size-1){
return 1;
}
else{
    return 0;
}
}
void enque(struct queue q,int value){
    if(isFull(q)){
        printf(("the queue is full"));
    }
    else{
        q.f++;
        q.arr[q.f]=value;
    }
}

int main(){
struct queue q;
q.size=5;
q.r=q.f=-1;
q.arr=(int *)malloc(sizeof(int));
enque(q,1);
enque(q,1);
enque(q,1);enque(q,1);
enque(q,1);enque(q,1);enque(q,1);enque(q,1);
enque(q,1);enque(q,1);

    return 0;
}
#include<iostream>
using namespace std;

class Stack {
    int size;
    int top;
    int *arr; 
};
int main()
{
Stack *s = new Stack();
s->size=5;
s->top=-1;
s->arr= new int();
    return 0;
}
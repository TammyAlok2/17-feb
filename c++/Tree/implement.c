#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    struct node* left;
     struct node* right;
    /* data */
};
struct node* createNode(int data){
    struct node *n; // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}



int main(){
struct node* p =createNode(10);
struct node* p1=createNode(103);
struct node*  p2= createNode(89);
struct node* p3 = createNode(19);
struct node* p4 = createNode(80);
struct node* p5 = createNode(800);

p->left=p1;
p->right=p2;
p1->left=p3;
p1->right = p4;
p2->left= p5;



    return 0;
}
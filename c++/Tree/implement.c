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
void preorder(struct node *root)
{
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
struct node* createNode(int data){
    struct node *n; // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}

void postOrder(struct node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}

void inOrder (struct node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
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

printf("Preorder traversal \n ");
preorder(p);
printf("\n postOrder Traversal \n ");
postOrder(p);
printf("\n Inorder traversal \n ");
inOrder(p);

    return 0;
}
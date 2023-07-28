#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

// void inorder(struct node *root)
// {
//     if (root != NULL)
//     {
//         inorder(root->left);
//         printf("%d ", root->data);
//         inorder(root->right);
//     }
// }

// int isBST(struct node * root){
//     if(root!=NULL){
//         if(!isBST(root->left)){
//             return 0;
//         }
//         static struct node *(prev);
//         if(prev!=NULL && root->data<=prev->data){
//             return 0;
//         }
//         prev=root;
//         return isBST(root->right);
//     }
    // else {
    //     return 1;
    // }

    // }

    struct node *search (struct node *root , int key){
        if(root==NULL){
            printf("Null");
        }
    if(key==root->data){
        printf("%d", root->data);
    }        
    else if (key>root->data){
    return search(root->right,key);
    }
    else{
        return search(root->left,key);
    }
}

int main()
{

    struct node *p = createNode(10);
    struct node *p1 = createNode(4);
    struct node *p2 = createNode(12);
    struct node *p3 = createNode(2);
    struct node *p4 = createNode(6);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    struct node * n= search(p,5);
    if(n!=0){

    printf("Found: %d", n->data);
    }
    else{
        printf("element not found");
    }

    return 0;


}

#include <stdio.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int createnode(int data)
{
    struct node *n;
    n->left = NULL;
    n->right = NULL;
    n->data = data;
    return n;
}

int main()
{
   
    struct node *p = createnode(2);
    struct node *p1 = createnode(3);
    struct node *p2 = createnode(4);
    p->left = p1;
    p->right = p2;
    printf("the obtained linked list is: %d  %d  %d",*p, *p1, *p2);
    printf("\n");
    printf("the parent is %d", *p);
    printf("\n");
    printf("its children are  %d  %d  ", *p1, *p2->data);
    return 0;
}


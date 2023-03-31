#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node* head;
void reverse(struct node *head)
{
    struct node *prevnode,*nextnode,*currentnode;
    prevnode=0;
    currentnode=nextnode=head;
    while(nextnode!=0)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;

}
void display(struct node *nextnode)
{
    //struct node *nextnode;
    while(nextnode!=0)
    {
        printf("%d\t",nextnode->data);
        nextnode=nextnode->next;

    }
    printf("\n");
}



/*          void display(struct node *head)
{
    struct node *temp;
    temp = head;
    while(temp != NULL)
    {
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}                       */

int main()
{
    struct node *prev,*newnode;
    int n,i;
    printf ("number of elements:");
    scanf("%d",&n);
    head=NULL;
    printf("enter the data of the elements:\n");
    for(i=0;i<n;i++)
    
    {
        newnode=malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
            head=newnode;
        else
            prev->next=newnode;
        prev=newnode;
    }
    printf("The elements of linked list are:\n");
    display(head);
    reverse(&head);
    return 0;
}

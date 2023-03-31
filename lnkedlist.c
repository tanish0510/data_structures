#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;

};
int main()
{
struct node *head,*newnode,*temp;
head=0;
int choice=1;
while(choice)
{
    newnode=malloc(sizeof(struct node));
    printf("enter data:\n");
    scanf("%d", &newnode->data);
    newnode->next=0;
    if(head==0)
    {
        head=temp=newnode=0;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;

    }
    printf("do you want to continue(0/1))?");
    scanf("%d",&choice);
}  
    temp=head;
    while(temp!=0)
    //for(temp=head;temp!=0;temp++)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    return 0;
}
//return 0;





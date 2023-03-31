#include<stdio.h>
#include<stdlib.h>

                //CREATION OF PUBLIC STRUCTURE//

struct node
{
    int data;
    struct node* prev;
    struct node *next;

};
struct node*head,*tail;
void create()

                //MAIN CREATION OF LST//

{
    struct node* newnode;
    
    int choice=1;
    while(choice)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    if(head==0)
    {
        head=tail=newnode;

    }
    else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;

    }
    printf("Do you want to  continue (0/1)?");
    scanf("%d",&choice);
}


}

                    //DISPLAY OF LIST//

void display()
{
    struct node*temp;
    temp=head;
    printf("The contents of doubly linked list are:\n");
    while(temp!=0)
    {
        printf("%d\t\t",temp->data);
        temp=temp->next;

    }
}

                //INSERT AT BEGINING//

void insertatbeg()
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("value you want to insert at start:\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}

                //INSERT AT END//

void insertatend()
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("value you want to insert at end:\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}

                //insert at posistion//

void insertatpos()
{
    int i,pos;
    printf("enter pos you want to enter");
    scanf("%d",&pos);
    if(pos==1)

{
    insertatbeg();    
}
else
{
    struct node*newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("value you want to insert at desired position:\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->prev=temp;
    temp->next=newnode;
    newnode->next=temp->next;
    newnode->next->prev=newnode;
}
}

            //REVERSE LIST//

void reverse()
{
    struct node *nextnode,*current;
    if(head==NULL)
    {
        printf("the list is empty");
    }
    else
    {
        current=head;
        while(current!=0)
        {
            nextnode=current->next;
            current->next=head->prev;
            current->prev=nextnode;
            current=nextnode;

        }
        current=head;
        head=tail;
        tail=current;
    }

}

            //DELETE FROM BEGINING//

            void delfrombeg()
            {
                struct node *temp;
                if(head==NULL)
                {
                    printf("EMPTY");

                }
            else
            {
                temp=head;
                head=head->next;
                head->prev=NULL;
                free(temp);
            }
            }

            //DELETE FROM END//

void delfromend()
{
    struct node *temp;
    if(head==0)
    {
        printf("invalid");

    }
    else
    {
        temp=tail;
        tail=tail->prev;
        tail->next=0;
    }

    //DELETE FROM SPECIFIC POSITION//

void delfrompos()
{
    int i=1,pos;
    struct node *temp;
    temp=head;
    printf("enter the pos");
    scanf("%d",&pos);
    while(i<pos)
    {
        temp=temp->head;
        i++;

    }
    temp->prev->next=temp0->next;
    temp->necxt->prev=temp->prev;
    free(temp);
}

}
            //MAIN FUNCTION//

int main ()
{
    create();
    insertatbeg();
    insertatend();
    insertatpos();
    reverse();
    delfrombeg();
    delfromend();
    delfrompos();
    display();
    return 0;

}
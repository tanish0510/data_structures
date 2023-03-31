#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
void enqueue(int x)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(front==0 && rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void display()
{
    struct node*temp;
    if(front==0 && rear==0)
    {
        printf("empty");
    }
    else
    {
        temp=front;
        while(temp!=0)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}


void dequeue()
{
    struct node *temp;
    temp=front;
    front=front->next;
    free(temp);
}

void peek()
{
    printf("%d",front->data);
}

int main()
{
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    display();
    dequeue();
    peek();
    dequeue();
    enqueue(9);
    dequeue();
    display();
    return 0;

}

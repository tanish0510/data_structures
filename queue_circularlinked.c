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
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(rear==0)
    {
        front=rear=newnode;
        rear->next=front;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
        rear->next=front;

    }

}


void dequeue()
{
    struct node *temp;
    temp=front;
    if(front==0)
    {
        printf("underflow");

    }
    else if(front==rear)
    {
        front=rear=0;
        free(temp);
    }
    else
    {
        front=front->next;
        rear->next=front;
        free(temp);
    }
}


    void peek()
    {
        if(front==0)
    {
        printf("underflow");

    }
    else
    {
        printf("\n%d",front->data);
    }
    }

    void display()
    {
        struct node *temp;
        temp=front;
        if(front==0)
        {
            printf("empty");
        }
        else
        {
            while(temp->next!=front)
            {
            printf("\t%d",temp->data);
            temp=temp->next;
            }
            printf("\t%d",temp->data);
        }
        
    }


    int main()
    {
        enqueue(5);
        enqueue(6);
        enqueue(7);
        enqueue(8);
        enqueue(9);
        display();
        dequeue();
        peek();
        dequeue();
        display();
    }



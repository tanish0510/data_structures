#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue(int x)
{
    if(rear=N-1)
    {
        printf("overflow condition");
    }
    else if(front==-1 && rea==-1)
    {
        frontf=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
}

void dequeue()
{
    if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("%d",queue[front]);
        front++;
    }
}

void display()
{
    int i;
    for(i=front;i<rear;i++)
    {
        printf("\n%d",queue[i]);
    }
}

void peek()
{
    printf("%d",queue[front]);
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
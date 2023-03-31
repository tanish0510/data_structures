#include<stdio.h>
int main()
{
    int a[50],size,num,pos,i,pos2,num2;
    char ans,y,n;
    printf("enter the size of the array:\n");
    scanf("%d", &size);
    printf("enter the elements of array:\n");
    //checking bounds
    if(size>50)
    {
        printf("specified limit exceeded");

    }
    //storing values
    else
    {
         for(i=0;i<size;i++)
         scanf("%d",&a[i]);
    }
    printf("enter the number you want to insert:\n");
    scanf("%d",&num);
    printf("enter the position you want to ammend:\n");
    scanf("%d",&pos);
    printf("do you want to enter any other value to be added?:(y/n)\n");
    scanf("%c",&ans);
    if(ans==y)
    {
        printf("enter the secind number:\n");
        scanf("%d",&num2);
        printf("enter the pos to be ammended:\n");
        scanf("%d",&pos2);
    }
    else{
    if(pos>size||pos2>size)
    {
        printf("invalid pos");
    }
    else
    //swapping cases
    {
        for(i=size-1;i>=pos-1;i--)
        a[i+1]=a[i];

    }
    {
    for(i=size-1;i>=pos2-1;i--)
        a[i+1]=a[i];
    }

    a[pos-1]=num;
    a[pos2-1]=num2;
    size++;
    for(i=0;i<size;i++)
    //printing the final array elements
    {
        printf("elements of array are:%d\n",a[i]);
    }
    }
    return 0;

}
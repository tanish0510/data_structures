#include<stdio.h>
struct student 
{
    int rollno;
    char name[20];
    int marks;
};
void main()
{
    struct student s1={1,"tanish",90};
    struct student *ptr=&s1;
    printf("info for s1 is:");
    printf("%d%s%d",ptr->rollno,ptr->name,ptr->marks);

}
#include<stdio.h>
struct student 
{
    int rollno;
    char name[20];
    int marks;
};
int main()
{
    struct student s[4];
    printf("enter info for students");
    for(int i=0;i<4;i++)
    {
       
        scanf("%d%s%d", &s[i].rollno,s[i].name,&s[i].marks);
    }
    for( int i=0;i<4;i++)
    {
       
        printf("\nroll no is:  %d\tname is:  %s\tmarks are:  %d", s[i].rollno,s[i].name,s[i].marks);
    }


}
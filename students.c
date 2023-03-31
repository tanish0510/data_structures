#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    char dept[20];
    char course[30];
    int joinyear;
};
int main()
{
    //int entyear;
    //nostudents;
    struct student s[450];
    
    //printf("enter number of students ");
    //scanf("%d", &nostudents);
    printf("enter the info:");
    int i;
    for( i=0;i<3;i++)
    {
        scanf("%d %c %c %c %d",&s[i].rollno,s[i].name,s[i].dept,s[i].course,&s[i].joinyear);
    }
    int entyear;
    printf("enter the joining year");
    scanf("%d",&entyear);
    if(entyear==s[i].joinyear)
    for ( i = 0; i <3; i++)
    
   
    {
        printf("\nname of student is:%c",s[i].name);

    }    
    
    
    return 0;
    

    
    

}
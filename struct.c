#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    int marks;
};
int main()
{
    struct student s1 = {1, "tanish", 100};
    struct student s2;
    printf(" enter for s2");
    scanf("%d %s %d", &s2.rollno, s2.name, &s2.marks);
    printf("\n info for s1 is:");
    printf("\n%d   %s   %d", s1.rollno, s1.name, s1.marks);
    printf("\n info for s2 is:");
    printf("\n%d   %s   %d", s2.rollno, s2.name, s2.marks);
   return 0;
}
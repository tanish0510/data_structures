#include<stdio.h>
typedef struct student
{
    int a;
    char b[20];
    float c;

}sex;
void main()
{
    sex s={1,"tani",97};
    sex s2={2,"aani",90};
    printf("%d\t%s\t%f", s.a,s.b,s.c);
     printf("\n%d\t%s\t%f", s2.a,s2.b,s2.c);
    
}
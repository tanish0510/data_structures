#include<stdio.h>
int main()
{
    int base;
    int power;
    int result=1;
    printf("enter base");
    scanf("%d", &base);
    printf("enter power");
    scanf("%d", &power);
    for(int i = 0; i<power; i++)
     {
        result=result*base;
     } 
    printf("%d", result);
    return 0;
} 
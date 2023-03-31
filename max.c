#include<stdio.h>
int main()
{
    int firstinteger;
    int secondinteger;
    int thirdinteger;
    printf("enter first integer");
    scanf("%d", &firstinteger);
    printf("enter second integer");
    scanf("%d" , &secondinteger);
    printf("enter third integer");
    scanf("%d", &thirdinteger);
    if(firstinteger>secondinteger && firstinteger>thirdinteger)
    printf("the biggest integer is %d", firstinteger);
    if(secondinteger>firstinteger && secondinteger>thirdinteger)
    printf("the biggest integer is %d" , secondinteger);
    if(thirdinteger>firstinteger && thirdinteger>secondinteger)
    printf("the biggest integer is %d", thirdinteger);
    return 0;
}

#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    float sq_root;
    float square;
    float cube;
    int prime_factors;
    printf("enter the num");
    scanf("%d", &num);
    sq_root=sqrt(num);
    square=num*num;
    cube=num*num*num;
    
    printf("sq_root=%f\nsquare=%f\ncube=%f\n",sq_root,square,cube );
    return 0;
    
}
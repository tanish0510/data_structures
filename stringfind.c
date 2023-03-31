#include<stdio.h>
#include<string.h>
int main()
{
    char *str[]={"tanish seth is",
    "beast","iint the",
    "whole whole", "world",
    "now is the"};
    char str1[20], *p;
    int i;
    
    printf("enter the strimg you want to find:");
    scanf("%s", str1);
    p=NULL;
    for(i=0;i<6;i++)
    {
        p=strstr(str[i],str1);
        if(p!=NULL)
        {
            printf("%s is found",str1);
        }
    }
    else
        printf("%s is not found",str1);
        

    
    return 0;

}
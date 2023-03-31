#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    int len=0,i;
    printf("enter the string:-");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if((i==0||str[i-1]==' ')&&str[i]=='t'&&str[i+1]=='h'&&str[i+2]=='e'&&(str[i+3]==' '||str[i+3]=='\0'))
        i=i+3;
    
    printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
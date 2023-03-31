#include<stdio.h>
int main()
{
    int i,j,rows,columns;
    int a[100][100];
    printf("enter the no. of rows you need:\n");
    scanf("%d",&rows);
    printf("enter the number of columns you need:\n");
    scanf("%d",&columns);
    printf("enter the elements of= matrice:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;

}

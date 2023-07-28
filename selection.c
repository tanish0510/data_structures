#include<stdio.h>

void printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)

    {
        printf("%d  ", A[i]);
    }
        printf("\n");
}
void selectionsort(int *A,int n){
    printf("Runnnig Selection Sort.....\n");
    for(int i=0;i<n-1;i++){
        int min;
        min=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[min]){
                min=j;
            }
        }
    int temp;
    temp=A[i];
    A[i]=A[min];
    A[min]=temp;
    }
}

int main(){
    int A[]={12,4,56,7,89,0,34,5,56};
    int n;
    n=sizeof(A)/sizeof(n);
    printarray(A,n);
    selectionsort(A,n);
    printarray(A,n);
    return 0;
}
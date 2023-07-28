#include<stdio.h>
int partition(int A[],int low,int high){
    int temp,i,j;
    int pivot;
    pivot=A[low];
    i=low+1;
    j=high;
    

// int temp;
do
{
   while(A[i]<=pivot)
   {
    i++;
   }
   while(A[j]>pivot)
   {
    j--;
   }

   if(i<j){
    temp=A[i];
    A[i]=A[j];
    A[j]=temp;
   }
} while (i<j);
temp=A[low];
A[low]=A[j];
A[j]=temp;
return j;


}

void quicksort(int A[], int low,int high){
   
    int partitionindex;
    if(low<high){
    partitionindex=partition(A,low,high);
    quicksort(A,low ,partitionindex-1);
    quicksort(A,partitionindex+1,high);
    }
}
void printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)

    {
        printf("%d  ", A[i]);
    }
        printf("\n");
}

int main(){
int A[]={12,45,6,7,2,3,4,34,45,12,67,3};
int n;
n=sizeof(A)/sizeof(n);
printf("size of the array is:  %d\n",n);
printf("the original array is:\n");
printarray(A,n);

quicksort(A,0,n-1);
 printf("Running Quicksort Feature....\n");              
printarray(A,n);
return 0;
}

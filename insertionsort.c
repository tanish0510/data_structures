#include <stdio.h>

void printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", A[i]);
    }
    printf("\n");
}

void insertionsort(int *A, int n)
{
    int key, j;
    for (int i = 0; i <= n - 1; i++)
    {
       
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int main()
{
    int A[] = {12, 56, 77, 3, 2, 1, 3, 4, 5, 100, 78, 90};
    int n;
    n = sizeof(A) / sizeof(n);
    printf("Size of the array is %d", n);
    printf("\n");
    printf("original array is:\n");
    printarray(A, n);
    printf("\n");
    insertionsort(A, n);
    printf("after sorting array looks like:\n");
    printarray(A, n);
    return 0;
}
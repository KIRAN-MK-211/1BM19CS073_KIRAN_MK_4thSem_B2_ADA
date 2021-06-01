#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
clock_t start,end;
double time_taken;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 

int main()
{
    int arr[10],n;
    printf("Enter no of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    start = clock();
    insertionSort(arr, n);
    end = clock();
    time_taken = (double)(end - start)/CLOCKS_PER_SEC;
    printf("Sorted array :: ");
    printArray(arr, n);
    printf("\nNo of elements: %d||Time taken: %f\n",n,time_taken);
 
    return 0;
}

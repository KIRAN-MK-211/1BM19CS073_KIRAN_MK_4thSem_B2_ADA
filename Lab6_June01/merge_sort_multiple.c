#include <math.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
clock_t start,end;
double time_taken;
int c,d;
int noOfEle[] = {1000, 2000, 3000, 4000, 5000, 10000};

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
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
    int n;
    printf("No. of elements\t||\tTime taken:: ||\n");
    printf("---------------------------------------\n");
    for(int i=0;i<6; i++)
    {
        n = noOfEle[i];
        int arr[n];
        for(int j=0;j<n;j++)
        {
            arr[j] = rand() % 100;
        }
        start = clock();
        insertionSort(arr, n);
        end = clock();
        time_taken = (double)(end - start)/CLOCKS_PER_SEC;
        printf("%d\t\t||\t%f     ||\n",n,time_taken);
    }
    printf("---------------------------------------\n");
    return 0;
}

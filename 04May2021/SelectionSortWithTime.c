#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
// Swap utility
void swap(long int* a, long int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void selectionSort(long int arr[], long int n)
{
    long int i, j, midx;
  
    for (i = 0; i < n - 1; i++) 
    {
        midx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[midx])
                midx = j;
        swap(&arr[midx], &arr[i]);
    }
}
  

int main()
{
    long int n = 500;
    int it = 0;
  
    
    double tim1[10];
  
    printf("A_size\tSelection Sort\n");

    while (it++ < 10) 
    {
        long int a[n];
        for (int i = 0; i < n; i++) 
        {
            long int no = rand() % n + 1;
            a[i] = no;
        }
        clock_t start, end;
        
        start = clock();
        selectionSort(a, n);
        end = clock();
  
        tim1[it] = ((double)(end - start));
  
        
        // for plotting graph with integer values
        printf("%li, %li\n",
               n,
               (long int)tim1[it]);
  
        // increases the size of array by 10000
        n += 500;
    }
  
    return 0;
}

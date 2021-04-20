#include <stdio.h>
#include <stdlib.h>

int recSearch(int arr[], int l, int r, int x)
{
     if (r < l)
        return -1;
     if (arr[l] == x)
        return l;
     if (arr[r] == x)
        return r;
     return recSearch(arr, l+1, r-1, x);
}

int recursiveBinarySearch(int arr[], int start_index, int end_index, int element){
   if (end_index >= start_index){
      int middle = start_index + (end_index - start_index )/2;
      if (arr[middle] == element)
         return middle;
      if (arr[middle] > element)
         return recursiveBinarySearch(arr, start_index, middle-1, element);
      return recursiveBinarySearch(arr, middle+1, end_index, element);
   }
   return -1;
}

void main(){
    int choice,x,y,n,i,j,t;
    
    int arr[10];
    printf("Enter the array length\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
   for (i = 0; i < n-1; i++)      
    {
        for (j = 0; j < n-i-1; j++) 
        {  
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }  
        }
    }      
       
    printf("ENTER\n 1. Linear Search \n 2. Binary Search \n -------------------\n");
    scanf("%d",&choice);
    switch(choice){
       case 1: printf("ELEMENT TO SEARCH : ");
               scanf("%d",&x);
               int index = recSearch(arr, 0, n-1, x);
               if (index != -1)
               printf("Element %d is present at index %d", x, index);
               else
               printf("Element %d is not present", x);
               break;
        case 2: printf("ELEMENT TO SEARCH : ");
                scanf("%d",&y);
                int found_index = recursiveBinarySearch(arr, 0, n-1, y);
                if(found_index == -1 ) {
                 printf("Element not found in the array ");
                 }
                else {
                 printf("Element found at index : %d",found_index);
                }
                break;
     }
}

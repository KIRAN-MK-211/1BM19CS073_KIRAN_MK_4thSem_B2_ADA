#include<stdio.h>
int main()
{
    int a[10],key,l,i;
    printf("Enter the length of the array\n");
    scanf("%d",&l);
    printf("Enter all the elements of the array\n");
    for(i=0;i<l;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be searched in the array\n");
    scanf("%d",&key);
    for(i=0;i<l;i++)
    {
        if(key==a[i])
        {
            printf("ELement found in the array at position: %d",(i+1));
            break;
        }
    }
    if(!(i<l))
        printf("Element not found\n");
}

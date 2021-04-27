#include<stdio.h>
int main()
{
    int a[20],n,i,j,t,min;
    printf("Enter the no of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf(":::::::::::The sorted array::::::::::===>\n");
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min = j;
        }
        t = a[i];
        a[i] = a[min];
        a[min] = t;
    }
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}

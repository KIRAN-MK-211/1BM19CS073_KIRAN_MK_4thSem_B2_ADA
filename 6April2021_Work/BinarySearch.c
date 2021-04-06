#include<stdio.h>
int main()
{
    int a[10],i,j,temp,key,min,lb=0,ub,k=0,p;
    printf("Enter the length of the array\n");
    scanf("%d",&ub);
    printf("Enter all the elements in the array\n");
    for(i=0;i<ub;i++)
    {
        scanf("%d",&a[i]);
    }
    ub--;
    for(i=0;i<ub;i++)
    {
       min = i;
       for(j=i+1;j<ub+1;j++)
       {
           if(a[j]<a[min])
                min=j;
       }
       temp = a[i];
       a[i] = a[min];
       a[min] = temp;
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&key);
    while(lb<=ub)
    {
        p = (lb+ub)/2;
        if(a[p]<key)
        lb=p+1;
        if(a[p]>key)
        ub = p-1;
        if(a[p]==key)
        {
            k=1;
            printf("The number is found in the array\n");
            break;
        }
    }
    if(k==0)
        printf("The given number is not found in the array\n");
}

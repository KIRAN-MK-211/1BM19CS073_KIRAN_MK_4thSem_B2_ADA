#include<stdio.h>
#include<stdlib.h>
int GCD(int a,int b);
int iterative(int a,int b);
int main()
{
    int p,q,r;
    printf("Enter 2 nos to find GCD\n");
    scanf("%d%d",&p,&q);
    if(p<q)
    {
        r = p;
        p = q;
        q = r;
    }
    printf("Enter 1 for recursive, 2 for Iterative method\n");
    scanf("%d",&r);
    switch(r)
    {
        case 1: r = GCD(p,q);
                break;
        case 2: r = iterative(p,q);
                break;
        default: {
            printf("Wrong choice\n");
            exit(0);
        }
    }
    printf("GCD of %d and %d is = %d",p,q,r);
    
}
int GCD(int a,int b)
{
    if(b==0)
        return a;
    else
        return(GCD(b,a%b));
}
int iterative(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else 
        {
            b = b - a;
        }
    }
 
    return a;        
}

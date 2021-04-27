#include<stdio.h>
int GCD(int a,int b);
int main()
{
    int a,b,t;
    printf("Enter 2 nos\n");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        t = a;
        a = b;
        b = t;
    }
    printf("GCD of %d and %d is:=> %d\n",a,b,GCD(a,b));
}
int GCD(int a,int b)
{
    if(b==0)
        return a;
    else
        return(GCD(b,a%b));
}

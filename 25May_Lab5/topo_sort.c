#include<stdio.h>
void dfs(int);
int a[10][10], n,expr[10], vis[10],j=0;
void main()
{
   int m,u,v,i;
   printf("Enter number of vertices\n");
   scanf("%d", &n);
   printf("Enter the adjacency matrix:: \n");
   for(i=1;i<=n;i++)
    {
       for(j=1;j<=n;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
    
    for(i=1;i<=n;i++)
        vis[i]=0;
    for(i=1;i<=n;i++)
    {
         if(vis[i]==0)
            dfs(i);
    }
    printf("Topological order:: \n");
    for(i=0;i<=n-1;i++)
        printf("%d",(expr[i]+1));

}
void dfs(int v)
{
    int i;
    
    vis[v]=1;
    for(i=1;i<=n;i++)
    {
        if(a[v][i]==1 && vis[i]==0)
            dfs(i);
    }
    expr[--j]=v;
}



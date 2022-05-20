#include<stdio.h>
int a[10][10],n,visited[10],count=0,k=0;
int topo[10];
void dfs(int v)
{
int w;
count++;
visited[v]=count;
for(w=0;w<n;w++){
if(visited[w]==0 && a[v][w]==1)
dfs(w);
}
printf("%d\t",v);
topo[k++]=v;
}
void main()
{
int i,j;
printf("enter the no.of vertex:");
scanf("%d",&n);
printf("enter the adjacency matrix:\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("the adjacency matrix are:\n");
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
printf("\t%d\t",a[i][j]);
printf("\n");
}
for(i=0;i<n;i++)
{
visited[i]=0;
}
printf("\n  __________dfs_______\n");
dfs(0);
printf("\n_____topology______\n");
for(i=n-1;i>=0;i--)
printf("%d\t",topo[i]);
}

#include<stdio.h>
void main()
{
int a[10],i,temp,j,n,min;
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[min]<a[j])
min=j;
}
if(min!=i)
{
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}
printf("sorted elements\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}

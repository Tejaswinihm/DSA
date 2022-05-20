#include<stdio.h>
#include<stdlib.h>
int a[10],n;
void buble_sort();
void buble_sort(int a[])
{
int i,j,temp;
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}
int main()
{
int a[10],i;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the element:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
buble_sort(a);
printf("sorted data is:\n");
for(i=0;i<n;i++)
printf(" %d",a[i]);
return 0;
}

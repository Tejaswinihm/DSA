#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[10],i,search,n,temp=-1;
printf("enter the number of element:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the search elements");
scanf("%d",&search);
for(i=0;i<n;i++)
{
if(a[i]==search)
{
temp=i;
}}
if(temp!=-1)
printf("item found at loc %d",temp);
else
printf("not found");
}


#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10],i,search,n,mid,low,high;
printf("enter the number of element:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the search elements");
scanf("%d",&search);
high=n-1;
low=0;
while(low<=high)
{
mid=(low+high)/2;
if(a[mid]==search)
{
printf("item found at loc %d",mid);
return 0;
}
else if(search<a[mid])
high=mid-1;
else
low=mid+1;
}
printf("not found");
}

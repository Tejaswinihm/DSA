#include<stdio.h>
#include<stdlib.h>
typedef struct Node* lstptr;
 struct Node
{
int data;
lstptr link;
};
lstptr first=NULL;
lstptr getnode()
{
lstptr ptr;
ptr=(lstptr)malloc(sizeof(struct Node));
return ptr;
}

void insertbegin(int ele)
{
lstptr new;
new=getnode();
new->data=ele;
new->link=NULL;
if(first!=NULL)
{
new->link=first;
}
first=new;
}
void insertend(int ele)
{
lstptr new,temp;
new=getnode();
new->data=ele;
new->link=NULL;
if(first==NULL)
{
new->link=first;
first=new;
}
else
{
temp=first;
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=new;
}
}
void deletebegin()
{
lstptr temp;
if(first==NULL)
{
printf("list is empty");
exit(0);
}
else
{
temp=first;
first=first->link;
free(temp);
}
}
void deleteend()
{
lstptr prev,temp;
if(first==NULL)
{
printf("empty");
exit(0);
}
temp=first;
if(first->link==NULL)
{
first=NULL;
free(temp);
}
else
{
prev=first;
while(temp->link!=NULL)
{
prev=temp;
temp=temp->link;
}
prev->link=NULL;
free(temp);
}
}
void display()
{
lstptr temp;
if(first==NULL)
{
printf("list is empty\n");
exit(0);
}
temp=first;
while(temp->link!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
printf("%d\n",temp->data);
}
void deletespecified(int ele)
{
lstptr temp,prev;
temp=first;
if(first==NULL)
{
printf("empty list");
}
else if(first->data==ele)
{
if(first->link!=NULL)
first=first->link;
else
first=NULL;
}
else
{
while(temp->data!=ele && temp->link!=NULL)
{
prev=temp;
temp=temp->link;
}
if(temp->link==NULL&&temp->data!=ele)
{
printf("item not found");
return;
}
else if(temp->link!=NULL)
prev->link=temp->link;
else
prev->link=NULL;
}
free(temp);
}


void main()
{
int ch,ele;
while(1)
{
printf("\n1.insert begin\n2.insert end\n3.delete begin\n4.delete end\n5.display\n6.delete specified\n7.EXit\n");
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
	printf("enter the element to be inserted:");
	scanf("%d",&ele);
	insertbegin(ele);
	break;
case 2:
	printf("enter the element to be inserted:");
	scanf("%d",&ele);
	insertend(ele);
	break;
case 3:deletebegin();
	break;
case 4:deleteend();
	break;
case 5:
	display();
	break;
case 6: printf("enter the element to the delete specified");
	scanf("%d",&ele);
	deletespecified(ele);
	break;
case 7:
	exit(0);
	break;
}
}
}

    © 2022 GitHub, Inc.

    Terms
    Privacy
    Security
    Status
    Docs
    Contact GitHub
    Pricing
    API
    Training
    Blog
    About



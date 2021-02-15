#include<stdlib.h>
#include <stdio.h>
void create();
void display();
void insert_begin();void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
struct node
{
int info;
struct node *next;
};
struct node *start=NULL;
int main()
{
int choice;
while(1){
printf("\n MENU");
printf("\n 1.Display ");
printf("\n 2.Insert at the beginning ");
printf("\n 3.Insert at the end ");
printf("\n 4.Insert at specified position");
printf("\n 5.Delete from beginning");
printf("\n 6.Delete from the end");
printf("\n 7.Delete from specified position ");
printf("\n 8.Exit\n");
printf("\n--------------------------------------\n");
printf("Enter your choice:\t");
scanf("%d",&choice);
switch(choice)
{
case 1:
display();
break;
case 2:
insert_begin();
break;
case 3:
insert_end();
break;
case 4:insert_pos();
break;
case 5:
delete_begin();
break;
case 6:
delete_end();
break;
case 7:
delete_pos();
break;
case 8:
exit(0);
break;
default:
printf("\n Wrong Choice:\n");
break;
}
}
return 0;
}
void create()
{
struct node *temp,*ptr;
temp=(struct node *)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\n Out of Memory Space:\n");exit(0);
}
printf("\n Enter the data value for the node:\t");
scanf("%d",&temp->info);
temp->next=NULL;
if(start==NULL)
{
start=temp;
}
else
{
ptr=start;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=temp;}
}
void display()
{
struct node *ptr;
if(start==NULL)
{
printf("\nList is empty:\n");
return;
}
else
{
ptr=start;
printf("\n The List elements are:\n");
while(ptr!=NULL)
{
printf("%d \t",ptr->info );
ptr=ptr->next ;
}
}
}
void insert_begin()
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
if(temp==NULL)
{printf("\nOut of Memory Space:\n");
return;
}
printf("\nEnter the data value for the node:\t" );
scanf("%d",&temp->info);
temp->next =NULL;
if(start==NULL)
{
start=temp;
}
else
{
temp->next=start;
start=temp;
}
}
void insert_end()
{struct node *temp,*ptr;
temp=(struct node *)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\nOut of Memory Space:\n");
return;
}
printf("\nEnter the data value for the node:\t" );
scanf("%d",&temp->info );
temp->next =NULL;
if(start==NULL)
{
start=temp;
}
else
{
ptr=start;
while(ptr->next !=NULL)
{
ptr=ptr->next ;
}
ptr->next =temp;
}
}
void insert_pos()
{struct node *ptr,*temp;
int i,pos;
temp=(struct node *)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\nOut of Memory Space:\n");
return;
}
printf("\n Enter the position for the new node to be inserted:\t");
scanf("%d",&pos);
printf("\n Enter the data value of the node:\t");
scanf("%d",&temp->info) ;
temp->next=NULL;
if(pos==0)
{
temp->next=start;
start=temp;
}
else{
for(i=0,ptr=start;i<pos-1;i++) { ptr=ptr->next;
if(ptr==NULL)
{
printf("\n Position not found:[Handle with care]n");
return;
}
}
temp->next =ptr->next ;
ptr->next=temp;
}
}
void delete_begin()
{
struct node *ptr;
if(ptr==NULL)
{
printf("\n List is Empty :");
return;
}
else
{
ptr=start;
start=start->next ;printf("\n The deleted element is :%d \t",ptr->info);
free(ptr);
}
}
void delete_end()
{
struct node *temp,*ptr;
if(start==NULL)
{
printf("\n List is Empty:");
exit(0);
}
else if(start->next ==NULL)
{
ptr=start;
start=NULL;
printf("\n The deleted element is:%d \t",ptr->info);
free(ptr);
}
else
{ptr=start;
while(ptr->next!=NULL)
{
temp=ptr;
ptr=ptr->next;
}
temp->next=NULL;
printf("\n The deleted element is:%d \t",ptr->info);
free(ptr);
}
}
void delete_pos()
{
int i,pos;
struct node *temp,*ptr;
if(start==NULL)
{
printf("\n The List is Empty:\n");
exit(0);
}
else
{
printf("\n Enter the position of the node to be deleted:\t");scanf("%d",&pos);
if(pos==0)
{
ptr=start;
start=start->next ;
printf("\n The deleted element is:%d \t",ptr->info );
free(ptr);
}
else
{
ptr=start;
for(i=0;i<pos;i++) { temp=ptr; ptr=ptr->next ;
if(ptr==NULL)
{
printf("\n Position not Found:\n");
return;
}
}
temp->next =ptr->next ;
printf("\n The deleted element is:%d \t",ptr->info );
free(ptr);
}}
}

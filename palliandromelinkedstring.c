#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int create(char);
int check(int);
struct node
{
char c;
struct node *fro;
struct node *back;
}*head=NULL,*tell=NULL;
typedef struct node node;
main()
{
char arr[20];
int m,i;
printf("\n enter string to check :");
scanf("%s",&arr);
m=strlen(arr);
printf("\n length of string is %d",m);
for(i=0;i<m;i++)
{
create(arr[i]);
}
display();
check(m);
}
create(char ch)
{
node *temp,*r;
temp=head;
r=(node*)malloc(sizeof(node));
r->c=ch;
if(head == NULL)
{
head=r;
tell=r;
head->fro=NULL;
head->back=NULL;
}
else
{
tell->fro=r;
r->back=tell;
tell=tell->fro;
tell->fro=NULL;}
}
display()
{
node *temp;
temp=head;
printf("\n\n\t");
while(temp != NULL)
{
printf("%c",temp->c);
temp=temp->fro;
}
}
check(int m)
{
node *tf,*tt;
tf=head;
tt=tell;
while(m/2 > 0)
{
if(tf->c == tt->c)
{
tf=tf->fro;
tt=tt->back;
}
else
{
printf("\n\n\t not a palidrome :???");
exit(0);
}
m--;
}
printf("\n\n\t it is palidrome !!!!");
}

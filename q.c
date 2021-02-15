#include<stdio.h>
int queue[100],maxsize,choice,front=-1,rear=-1,item,i;
void enqueue();
void dequeue();
void display();
int main()
{
printf("enter the size of the queue");
scanf("%d",&maxsize);
printf("choice:1.enqueue\t2.dequeue\t3.display\t4.exit");
do
{
printf("\nenter the choice\n");
scanf("%d",&choice);
if(choice==1){
enqueue();
}
else
if(choice==2)
{
dequeue();
}
else
if(choice==3)
{
display();
}
else
if(choice==4)
{
printf("\n\t EXIT POINT ");
}
}
while(choice!=4);
return 0;
}
void enqueue()
{
if(rear==maxsize-1)
{
printf("\nqueue is full\n");
}
else
if(front==-1)
{
front=0;
}
printf("enter the element to be inserted");
scanf("%d",&item);
rear=rear+1;
queue[rear]=item;
}
void dequeue(){
if(front==-1 && rear==-1)
{
printf("the queue is empty");
return;
}
else
{
printf("\n deleted element is %d",queue[front]);
front++;
}
}
void display(){
if(rear == -1)
printf("\nQueue is Empty!!!");
else{
int i;
printf("\nQueue elements are:\n");
for(i=front; i<=rear; i++)
printf("%d\t",queue[i]);
}
}

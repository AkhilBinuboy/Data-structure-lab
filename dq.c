#include<stdio.h>
#include<stdlib.h>
int a[20],item,front=-1,rear=-1,choice;
void insert_from_front(int max);
void insert_from_rear(int max);
void delete_from_front(int max);
void delete_from_rear(int max);
void display();    
int main()
{
    int max;
    printf("enter the size of the queue");
    scanf("%d",&max);
   printf("choice:\n1.insert from front\n2.insert from end\n3.delete from front\n4.delete end\n5.display\n6.exit");
do
{
      printf("\nenter the choice\n");
   scanf("%d",&choice);
     if(choice==1)
            
            {
                insert_from_front(max);
            }
            else
            if(choice==2)
            {
                insert_from_end(max);
        }
        else
        if(choice==3)
            {
                delete_from_front(max);
            }
            else 
            if(choice==4)
            {
                delete_from_rear(max);
            }
            else   
            if(choice==5)
            {
                display();
            }
        
        }
    while(choice!=6);
    return 0;
}
void insert_from_end(int max)
{
    if(rear==max-1)
    {
        printf("\n the double ended queue is full\n");
    }
    else
    rear=rear+1;
    printf("\nenter the item to be inserted\n");
    scanf("%d",&item);
    a[rear]=item;
    if(front==-1)
    {
        front=0;
    }
}
void insert_from_front(int max)
{
    if(front<=0)
    {
        printf("\ninsertion from the front end is not possible\n");
    }
    else 
    {
    
     front=front-1;
     printf("\nenter the element to be inserted\n");
     scanf("%d",&item);
     a[front]=item;
}
}
void delete_from_front(int max)
{
    if(front==-1)
    {
        printf("\nthe double ended queue is empty\n");
    }
    else
    item=a[front];
    printf("the deleted element is:%d",item);
    if(front==rear)
    {
        front=-1;
        rear=-1;
    return 0;
    }
    front=front+1;
}
void delete_from_rear(int max)
{
    if(rear==-1)
    {
        printf("\ndeletion is not possible");
    }
    else
    item=a[rear];
    printf("the deleted element is:%d",item);
    if(front==rear)
    {
        front=-1;
        rear=-1;
    return 0;
    }
    rear=rear-1;
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("\ndeque is empty\n");
    }
    else
    for(i=front;i<=rear;i++)
    {
        printf("\t%d",a[i]);
    }
}

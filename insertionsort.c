#include<stdio.h>

void main()
{
int a[50],i,n,j,temp;

printf("\n\t\tINSERTION SORT\n");
printf("\t\t_____________\n");
printf("\n\n\tEnter the limit:");
scanf("%d",&n);
printf("\n\n\tEnter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while(temp<a[j]&&j>=0)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
printf("\n\n\tThe sorted array is:");
for(i=0;i<n;i++)
{
printf("\t%d",a[i]);
}

}

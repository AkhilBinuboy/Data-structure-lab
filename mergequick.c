#include<stdio.h>
struct student
{
char name[100];
float height;
int weight;
};
struct student s[10],t;
void quicksort(struct student s[10],int,int);
int partition(struct student s[10],int,int);
void mergesort(struct student s[10],int,int);
void merge(struct student s[10],int,int,int);
void main()
{
struct student s[10];
FILE *fptr;
int i;
fptr=fopen("quicksort.txt","w");
for(i=0;i<3;++i)
{
fflush(stdin);
printf("enter the name of the students");
gets(s[i].name);
printf("\nenter the height\n");
scanf("%f",&s[i].height);
printf("\nenter the weight of the students\n");
scanf("%d",&s[i].weight);
fprintf(fptr,"\nname:%s\nheight:%.1f\nweight:%d\n",s[i].name,s[i].height,s[i].weight);
}
fprintf(fptr,"\n\nquick sort on the basis of weight\n\n");
quicksort(s,0,3-1);
for(i=0;i<3;i++)
{
fprintf(fptr,"\nname:%s\nheight:%.1f\nweight:%d\n",s[i].name,s[i].height,s[i].weight);
}
fclose(fptr);
FILE *f1;
f1=fopen("mergesort.txt","w");
mergesort(s,0,3-1);
fprintf(f1,"\n\nData After Merge Sort on the basis of height\n\n");
for(i=0;i<3;i++)
{
fprintf(f1,"\nname:%s\nheight:%.1f\nweight:%d\n",s[i].name,s[i].height,s[i].weight);
}
fclose(f1);
}
void quicksort(struct student s[10],int lb,int ub)
{
int mid;
if(lb<ub)
{
mid=partition(s,lb,ub);
quicksort(s,lb,mid-1);
quicksort(s,mid+1,ub);
}
}
int partition(struct student s[10],int lb,int ub)
{
int p,q,pivot;
p=lb+1;
q=ub;
pivot=s[lb].weight;
while(q>=p)
{
while(s[p].weight<pivot)
p++;
while(s[q].weight>pivot)
q--;
if(q>p)
{
t=s[p];
s[p]=s[q];
s[q]=t;
}
}
t=s[lb];
s[lb]=s[q];
s[q]=t;
return q;
}
void mergesort(struct student s[],int lb,int ub)
{
int mid;
if(lb<ub)
{
mid=(lb+ub)/2;
mergesort(s,lb,mid);
mergesort(s,mid+1,ub);
merge(s,lb,mid+1,ub);
}
}
void merge(struct student s[10],int lb,int mid,int ub)
{
int k,p1,p2,p3;
struct student s1[10];
p1=lb;
p3=lb;
p2=mid;
while((p1<mid)&&(p2<=ub))
{
if(s[p1].height<=s[p2].height)
s1[p3++]=s[p1++];
else
s1[p3++]=s[p2++];
}
while(p1<mid)
{
s1[p3++]=s[p1++];
}
while(p2<=ub)
{
s1[p3++]=s[p2++];
}
for(k=lb;k<p3;k++)
{
s[k]=s1[k];
}
}
#include<stdio.h>
void tuple(int temp[10][10],int row,int column);
int add_matrix(int a[10][10],int b[10][10],int m,int n,int o,int p);
void transpose(int temp1[10][10],int row,int column);
int main()
{
    int a[10][10],b[10][10],t[10][3],c[10][10],i,j,m,n,o,p,u[10][10],v,f;
    printf("enter the no.of rows and columns of first matrix");
    scanf("%d%d",&m,&n);
    printf("enter the elements in the matrix");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
    }
    printf("enter the no.of rows and columns of second matrix");
    scanf("%d%d",&o,&p);
    printf("enter the elements in the matrix");
    for(i=0;i<o;i++)
    {
    for(j=0;j<p;j++)
    {
     scanf("%d",&b[i][j]);
    }
    }
    tuple(a,m,n);
    tuple(b,o,p);
    add_matrix(a,b,m,n,o,p);
    transpose(a,m,n);
    transpose(b,o,p);
    
    
    }
void tuple(int temp[10][10],int row ,int column)
{
  int  t[10][3],i,j,k,r,q;
  t[0][0]=row;
  t[0][1]=column;
  k=1;
  i=0;
  j=0;
for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{
    if(temp[i][j]!=0)
    {
      t[k][0]=i;
      t[k][1]=j;
      t[k][2]=temp[i][j];
    k++;
    }
    }
    }
   t[0][2]=k-1;
printf("\nthe tuple form is:\n");
 for(r=0;r<k;r++)
{
 for(q=0;q<3;q++)
{
  printf("%d\t",t[r][q]);
}
printf("\n");
}
}
int add_matrix(int a[10][10],int b[10][10],int m,int n,int o,int p)
{
    int c[10][10];
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the sum of the matrix is:");
    tuple(c,m,n);
    
}
void transpose(int temp1[10][10],int v,int f)
{
    int i,j,u[10][10];
    for(i=0;i<v;i++)
    {
        for(j=0;j<f;j++)
        {
            u[i][j]=temp1[i][j];
        }
    }
    printf("\nthe transpose is matrix a and b:\n");
    tuple(u,v,f);
}

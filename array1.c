#include<stdio.h>
void main()
{
int a[2][3],b[2][3],c[2][3],i,j;
printf("enter six number for first matrix ");
//scanf("%d%d",&a[i][j],&b[i][j]);
for(i=0;i<2;i++)
 for(j=0;j<=2;j++)
    scanf("%d",&a[i][j]);

printf("enter six number for second matrix");
//scanf("%d%d",&a[i][j],&b[i][j]);
for(i=0;i<2;i++)
 for(j=0;j<=2;j++)
    scanf("%d",&b[i][j]);

 for(i=0;i<2;i++)
 {
  for(j=0;j<=2;j++)
  {
   c[i][j]= a[i][j]+b[i][j];
   printf("%d ",c[i][j]);
   //printf("\n");
   }
    printf("\n");
   }
 }


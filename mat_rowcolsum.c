#include <stdio.h>
void main()
{
    int n,i,j,k;
    int mat[10][10];
    printf("Enter no.of rows and columns for a square matrix: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
int rs=0;
int cs=0;
for (i=0;i<n;i++)
{
    for(j=0;j<n;j++)
        rs+=mat[i][j];
 printf("row %d sum: %d\n",i+1,rs);
 rs=0;
    
}

for (i=0;i<n;i++)
{
    for(j=0;j<n;j++)
       cs+=mat[j][i];
 printf("col %d sum: %d\n",i+1,cs);
 cs=0;
 }
}
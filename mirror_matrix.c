#include <stdio.h>
int A[10][10],B[10][10],C[10][10],D[10][10];

void matentry(int D[10][10],int m, int n)
{	printf("Enter the matrix:\n");
for(int i=0;i<m;i++)
{	for(int j=0;j<n;j++)
	{	scanf(" %d",&D[i][j]);
        getchar();
	}
	printf("\n");
}
}

void matdisp(int A[10][10],int m,int n)
{	for (int i=0;i<m;i++)
	{	for(int j=m-1;j>=0;j--)
		{	printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
}


int main ()
{
int i,j,m,n;
printf ("Enter no. of rows & cols for square matrix : ");
scanf("%d",&m);
n=m;
matentry(A,m,n);

matdisp(A,m,n);
}
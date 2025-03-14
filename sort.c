#include <stdio.h>
#include <unistd.h>
int main()
{
int n,t,j,i;
printf("Enter the no. of elements:");
scanf("%d",&n);
int arr[n];
printf("Enter the elements:\n");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
printf("The entered order is:\n");
printf("[");
for(i=0;i<n;i++)
    printf("%d,",arr[i]);
printf("]");   
printf("\n");
for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if( arr[j]>arr[j+1])
            {
                t=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=t;
            }
        }

    }
sleep(1);
printf("After sorting:\n");
printf("[");
for(i=0;i<n;i++)
    printf("%d,",arr[i]);
printf("]");
return 0;
}
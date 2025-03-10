#include <stdio.h>
int fact(int num)
{
	if (num==1)
		return 1;
	else
		return num*fact(num-1);
}

int main()
{
int num,i;
printf("Enter the number: ");
scanf("%d",&num);
if (num<0)
printf("Enter a positive no. ");
else
printf("%d",fact(num));
return 0;
}

#include<stdio.h>
int even(int a)
{
	int c;
	c=a%2;
	if(c==0)
	{
		printf("It is a even number");
	}
	else
	{
	   printf("It is a odd number");	
	}
}
int main(void)
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	even(a);
	return 0;
}

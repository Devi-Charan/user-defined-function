#include<stdio.h>
int add(int a,int b)
{
	int c;
	c=a+b;
	printf("%d",c);
}
int sub(int a,int b)
{
	int d;
	d=a-b;
	printf("\n%d",d);
}
int mul(int a,int b)
{
	int e;
	e=a*b;
	printf("\n%d",e);
}
float div(float a,float b)
{
	float f;
	f=a/b;
	printf("\n%f",f);
}
int main(void)
{
	int a,b;
	printf("Enter the number:");
	scanf("%d",&a);
	printf("Enter the number:");
	scanf("%d",&b);
	add(a,b);
	sub(a,b);
	mul(a,b);
    div(a,b);
	return 0;
}

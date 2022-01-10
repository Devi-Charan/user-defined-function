//si=(p*t*r)/100
#include<stdio.h>
float si(float p,float t,float r)
{
	float c;
	c=(p*t*r)/100;
	printf("%f",c);
}
int main(void)
{
	float p,t,r;
	printf("Enter the p:");
	scanf("%f",&p);
	printf("Enter the t:");
	scanf("%f",&t);
	printf("Enter the r:");
	scanf("%f",&r);
	si(p,t,r);
	return 0;
}

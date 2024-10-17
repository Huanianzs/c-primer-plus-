#include<stdio.h>
void cube(double a);
int main(void)
{
	double value;
	printf("Please enter a number:");
	scanf("%lf",&value);
	cube(value);
	return 0;
}
void cube(double a)
{
	double c;
	c =a*a*a;
	printf("%lf",c);
}

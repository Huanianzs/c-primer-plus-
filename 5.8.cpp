#include <stdio.h>
int main(void)
{
	int one,two;
	
	printf("This program computes moduli.\n");
	
	printf("Enter an integer to serve as the second operand:");
	scanf("%d",&two);
	
	printf("Now enter the first operand:");
	
	scanf("%d",&one);
	
	while(one>0)
	{
		printf("%d %% %d is %d\n",one,two,one%two); 
		printf("Enter next number for first operand(<=0 to quit):");
		scanf("%d",&one);
	}
	
	printf("done!");
	return 0;
 } 

#include<stdio.h>
#define CHUN 2.54
#define CHI 12
int main(void)
{
	float cm,chi,chun;
	
	printf("Enter a height in centimeters:");
	scanf("%f",&cm);
	
	while(cm>0)
	{
		chun=cm/CHUN;
		chi=chun/CHI;
		printf("%.2f cm %.2f feet,%.2f inches.\n",cm,chi,chun);
		printf("Enter a height in centimeters(<=0 to quit):");
		scanf("%f",&cm);
	}
	printf("bye");
	return 0;
}

#include<stdio.h>
int main(void)
{
	int count,counta,countb;
	printf("Please enter an integer:");
	scanf("%d",&counta);
	countb=counta+10;
	while (counta<=countb)
	{
		counta++;
		printf("%d\n",counta);\
	}
	printf("done!");
	return 0;
}

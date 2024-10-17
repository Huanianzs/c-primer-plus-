#include <stdio.h>
#define SIXTY 60
int main(void)
{
	int total,hour,min;
	printf("Please enter the total number of minutes\n");
	scanf("%d",&total);
	while (total>0)
	{
		hour = total/SIXTY;
		min = total%SIXTY;
		printf("What you entered is %d hour and %d minutes",hour,min);
		scanf("%d",total);	
	}
	printf("done!");
	return 0;
 } 

#include <stdio.h>
int main(void)
{
	int dday,week,day;
	printf("Please enter a number of day:");
	scanf("%d",&dday);
	while(dday>0)
	{
		week=dday/7;
		day=dday%7;
		printf("%d day are %d week,%d days.\n",dday,week,day);
		printf("Please enter a number of day:");
		scanf("%d",&dday);
	}
	printf("done!");
	return 0;
}


#include<stdio.h>
int main(void)
{
	int count,sum,day;
	
	count = 0;
	sum = 0;
	
	printf("Please enter the total number of days:");
	scanf("%d",&day);
	
	while (count++ <day)
		sum=sum+count*count;
	printf("sum = $%d\n",sum);
	
	return 0;
}

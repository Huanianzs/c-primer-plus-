#include <stdio.h>
#define onejialun 3.785
int main(void)
{
	float licheng,qiyouliang;
	const float oneyingli=1.609;	
	
	printf("Plese enter licheng:");
	scanf("%f",&licheng);
	
	printf("Plese enter qiyouliang:");
	scanf("%f",&qiyouliang);
	
	printf("每加仑汽油行驶%.1f英里\n",licheng/qiyouliang);
	printf("每100km消耗%.1f油",100*(qiyouliang*onejialun/licheng*oneyingli));
	
	return 0;
	 
 } 

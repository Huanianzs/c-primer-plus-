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
	
	printf("ÿ����������ʻ%.1fӢ��\n",licheng/qiyouliang);
	printf("ÿ100km����%.1f��",100*(qiyouliang*onejialun/licheng*oneyingli));
	
	return 0;
	 
 } 

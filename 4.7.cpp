#include<stdio.h>
#include<float.h>
int main(void)
{
	double a=1.0/3.0;
	float b=1.0/3.0;
	
	printf("%.6f %.6f\n",a,b);
	printf ("%.12f %.12f\n",a,b);
	printf ("%.16f %.16f\n",a,b);
	
	printf("%d %d",FLT_DIG,DBL_DIG);
	
	//4.8-7�����ʴ�: ��һ��, ��Ϊfloat��ȷ����6λ, ��double��15λ, �����ڳ�����ȷ��λ������в��� 
	
	return 0;
}

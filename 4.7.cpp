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
	
	//4.8-7书上问答: 不一致, 因为float精确度是6位, 而double是15位, 所以在超过精确度位数后会有差异 
	
	return 0;
}

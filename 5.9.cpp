#include <stdio.h>
void Temperatures(double x);
int main(void)
{
	double value;
	
	printf("����������Ҫת���Ļ��϶ȣ�����Ϊ��ת�������϶ȺͿ��϶ȣ�"); 
	
	while(scanf("%lf",&value)>0)
	{
		Temperatures(value);
		printf("\n����������Ҫת���Ļ��϶ȣ�����Ϊ��ת�������϶ȺͿ��϶�(����q�˳�)��"); 
	}
	printf("done!");
	return 0;

}
void Temperatures(double x)
{
	double celsius,Kelvin;
	
	const double c_val=32.0;
	const double K_val=273.16;
	
	celsius=5.0/9.0*(x-c_val);
	Kelvin=celsius+K_val;
	
	printf("%.2lf�H = %.2lf�� = %.2lfK",x,celsius,Kelvin);
	
}

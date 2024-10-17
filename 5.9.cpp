#include <stdio.h>
void Temperatures(double x);
int main(void)
{
	double value;
	
	printf("请输入您需要转换的华氏度，程序将为您转换成摄氏度和开氏度："); 
	
	while(scanf("%lf",&value)>0)
	{
		Temperatures(value);
		printf("\n请输入您需要转换的华氏度，程序将为您转换成摄氏度和开氏度(输入q退出)："); 
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
	
	printf("%.2lf℉ = %.2lf℃ = %.2lfK",x,celsius,Kelvin);
	
}

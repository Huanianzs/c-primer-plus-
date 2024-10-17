#include <stdio.h>
int main(void)
{
	float Mbs,MB,time;
	
	printf("请输入兆位每秒（Mb/s）的下载速度和兆字节（MB）的文件大小：");
	
	scanf("%f",&Mbs);
	scanf("%f",&MB);
	
	time=(MB*8)/Mbs;
	
	printf("At %.2f megabits per second ,a file of %.2f megabytes \ndownloads in %.2f seconds.",Mbs,time,MB);
	
	return 0;
 } 

#include <stdio.h>
int main(void)
{
	float Mbs,MB,time;
	
	printf("��������λÿ�루Mb/s���������ٶȺ����ֽڣ�MB�����ļ���С��");
	
	scanf("%f",&Mbs);
	scanf("%f",&MB);
	
	time=(MB*8)/Mbs;
	
	printf("At %.2f megabits per second ,a file of %.2f megabytes \ndownloads in %.2f seconds.",Mbs,time,MB);
	
	return 0;
 } 

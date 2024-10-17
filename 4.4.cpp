#include <stdio.h>
int main(void)
{
	char myName[30];
	float myHeigh;
	
	printf("Plese enter you hight(cm) and name:");
	
	scanf("%f""%s",&myHeigh,myName);	
	
	printf("%s,you are %.3f m tall",myName,myHeigh/100);
	
	return 0;
	
	
}

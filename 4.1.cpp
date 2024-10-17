#include <stdio.h>
int main(void)
{
	char firstName[10],secondName[10];
	
	printf("Plese enter you first name :\n");
	scanf("%s",firstName);
	
	printf("Plese enter you second name :\n");
	scanf("%s",secondName);
	
	printf("you name is %s,%s.",firstName,secondName);
	
	return 0;
	
	
}

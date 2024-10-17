#include <stdio.h>
int main(void)
{
	//a
	/*
	char firstName[10],lastName[10];
	printf("Plese enter you firstname and lastname:\n");
	scanf("%s",firstName);
	scanf("%s",lastName);
	printf("your name is \"%s,%s\"",firstName,lastName);
	return 0;
	*/
	
	//b
	/*char firstName[10];
	printf("Plese enter you firstname :\n");
	scanf("%s",firstName);
	//scanf("%s",lastName);
	printf("your name is \"%20s\"",firstName);
	return 0;
	*/
	
	//c
	/*
	char firstName[10];
	printf("Plese enter you firstname :\n");
	scanf("%s",firstName);
	printf("your name is \"%-20s\"",firstName);
	return 0;
	*/
	
	//d
	/*char firstName[10];
	int a=3;
	scanf("%s",firstName);
	printf("your name is %*s",a,firstName);
	return 0;
	*/
	char firstName[10],lastName[10];
	printf("Plese enter you firstname and lastname:\n");
	scanf("%s",firstName);
	scanf("%s",lastName);
	printf("your name is \"%s,%s\"",firstName,lastName);
	return 0;
	int  namelength=
	strlen(name);
	printf("%*s\"\n",namelength+3,name);
	return 0;
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char firstName[20],lastName[20];

	printf("Plese enter your lastname:");
	scanf("%s",lastName);
	
	printf("Plese enter your firstname:");
	scanf("%s",firstName);
	
	printf("\n%s %s\n",firstName,lastName);
	printf("%*d %*d\n",strlen(firstName),strlen(firstName),strlen(lastName),strlen(lastName));
	
	printf("\n%s %s\n",firstName,lastName);
	printf("%-*d %-*d",strlen(firstName),strlen(firstName),strlen(lastName),strlen(lastName));
	
	return 0;
	
 } 

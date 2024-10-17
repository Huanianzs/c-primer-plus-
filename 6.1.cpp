#include<stdio.h>
int main(void)
{
	int index,x;
	char letter[26];
	
	for(index=0,x='A';index<26;index++)
	letter[index]=x++;
	
	printf("\n");
	
	for(index=0;index<26;index++)
	printf("%c",letter[index]);
	
	printf("\ndone!");
	

	return 0;
}

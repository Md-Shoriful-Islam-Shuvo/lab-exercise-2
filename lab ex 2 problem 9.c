#include<stdio.h>
int main()
{
	char a;
	printf("Enter any number or later or symbel ");
	scanf("%c",&a);
	if(a>=65 && a<=90)
	{
		printf("the carecter is a caital later");
	}
	else if(a>=97 && a<=122)
	{
		printf(" the carecter is a small later");
	}
	else if (a>=48 && a<=57)
	{
		printf("the carecter is a number");
	}
	else if((a>=0 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=127))
	{
		printf("the carecter is special symbel");
	}
	return 0;
}

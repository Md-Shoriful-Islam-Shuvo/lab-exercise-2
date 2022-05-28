#include<stdio.h>
int main()
{
	int mark;
	printf("enter the markes of a course");
	scanf("%d",&mark);
	if(mark>=80 && mark<=100)
	{
		printf(" You go 'A+'");
	}
	else if(mark>=70 && mark<=79)
	{
		printf("You got 'A'");
	}
	else if(mark>=60 && mark<=69)
	{
		printf("You got 'A-'");
	}
	else if(mark>=50 && mark<=59)
	{
		printf("You got 'B'");
	}
	else if(mark>=40 && mark<=49)
	{
		printf("You got 'C'");
	}
	else
	{
		printf("You got 'F'");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter three angles of the triangle");
	scanf("%d %d %d",&z, &y, &x);
	if ((x+y+z)==180)
	{
		printf("The triangle is valid");
	}
	else
	{
		printf("The triangel is not valid");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a,b,c,area,primeter,s;
	printf("Enter the value of 3 armes of a tringel:\n");
	scanf("%d%d%d",&a,&b,&c);
	primeter=a+b+c;
	s=primeter/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	if (area>primeter)
	{
		printf("area is biger than primeter");
	}
	else
	{
		printf("primeter is bigger then area");
	}
	return 0;
}

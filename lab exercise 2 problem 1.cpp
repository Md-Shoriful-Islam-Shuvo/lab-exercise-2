#include<stdio.h>
main()
{
	
	int b,s,p,l; // b= buying price, s= selling price p= profit, l= losse
	printf("Inpute the buying and selling price:");
	scanf("%d %d",&b, &s);
	if (b<s)
	{
		p=s-b;
		printf("its a profit and the profit is %d",p);
	}
	else
	{
		l=b-s;
		printf("it's a losse and the losse is %d",l);
	}
	return 0;
}

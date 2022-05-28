#include<stdio.h>
int main()
{
	int a, a1, a2, a3, b1, b2, b3, b4, b5, b;
	printf("Enter a 5 digit number: ");
	scanf("%d",&a);   // a in the entered number
	b5= a%10; // 5th digit
	a1= a/10;// 4 digit number
	b4=a1%10;// 4th digit
	a2=a1/10; //3 digit number
	b3=a2%10;// 3rd number
	a3=a2/10; // 2 digit number
	b2= a3%10; // 2nd number
	b1= a3/10; // revarsed number
	b= b5*10000+b4*1000+ b3*100+ b2*10+ b1;
	printf ("the reversed number in %d \n",b);
	if (a=b)
	{
		printf("they are equal");
	}
	else
	
	{
		printf("they are not eqaul");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arif, fahmid, joy;
	printf("Enter arif, fahmid & joy's age in a order:");
	scanf("%d %d %d", &arif, &fahmid, &joy);
	if (arif<fahmid && arif<joy)
	{
		printf("Arif is younger");
	}
	else if (fahmid< arif && fahmid< joy)
	{
		printf("Fahmid is younger");
	}
	else
	{
		printf("Joy is younger");
	}
	return 0;
}

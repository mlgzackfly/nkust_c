#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cost,total;
	
	printf("����95��A���d9��A���U85��\n");
	printf("��J���O�B�G");
	scanf("%d", &total);
	
	if (total >= 10000)
	{
		cost = total *0.85;
		printf("���U85������I%d��", cost);
	}
	else if (total >= 1000)
	{
		cost = total *0.9;
		printf("���d9������I%d��", cost);
	}
	else if (total >= 100)
	{
		cost = total *0.95;
		printf("����95������I%d��", cost);
	}
	return 0 ;
	} 

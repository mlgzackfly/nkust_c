#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cost,total;
	
	printf("滿百95折，滿千9折，滿萬85折\n");
	printf("輸入消費額：");
	scanf("%d", &total);
	
	if (total >= 10000)
	{
		cost = total *0.85;
		printf("滿萬85折後應付%d元", cost);
	}
	else if (total >= 1000)
	{
		cost = total *0.9;
		printf("滿千9折後應付%d元", cost);
	}
	else if (total >= 100)
	{
		cost = total *0.95;
		printf("滿百95折後應付%d元", cost);
	}
	return 0 ;
	} 

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int score;
	printf("輸入成績(0~100):");
	scanf("%d", &score);
	
	if (score < 0 || score >100)
	{
		printf("請輸入0~100的數！");
	}
	else if (score <60 )
	{
		printf ("丁等");
	}
	else if (score <70 )
	{
		printf ("丙等");
	}
	else if (score <80 )
	{
		printf ("乙等");
	}
	else if (score <90 )
	{
		printf ("甲等");
	}
	else if (score <100 )
	{
		printf ("優等");
	}
		
	return 0 ;
}

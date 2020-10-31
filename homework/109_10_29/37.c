#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int score;
	printf("块Θ罿(0~100):");
	scanf("%d", &score);
	
	if (score <60 )
	{
		printf ("单");
	}
	else if (score <70 )
	{
		printf ("单");
	}
	else if (score <80 )
	{
		printf ("单");
	}
	else if (score <90 )
	{
		printf ("ヒ单");
	}
	else if (score <100 )
	{
		printf ("纔单");
	}
		
	return 0 ;
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int score;
	printf("��J���Z(0~100):");
	scanf("%d", &score);
	
	if (score <60 )
	{
		printf ("�B��");
	}
	else if (score <70 )
	{
		printf ("����");
	}
	else if (score <80 )
	{
		printf ("�A��");
	}
	else if (score <90 )
	{
		printf ("�ҵ�");
	}
	else if (score <100 )
	{
		printf ("�u��");
	}
		
	return 0 ;
}

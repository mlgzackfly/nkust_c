#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b,c;
	printf("�P�_�@�T���άO�_���w���T����\n");
	printf("��J�T���a,b,c:");
	scanf("%f,%f,%f", &a,&b,&c);
	if (a*a > (b*b+c*c) && b*b > (a*a+b*b) && c*c > (a*a+b*b))
	{
		printf("��� %f,%f,%f ���T���άO�w���T����", a,b,c);
	}
	else
	{
		printf("��� %f,%f,%f ���T���Τ��O�w���T����", a,b,c);
	}
	return 0 ;
}

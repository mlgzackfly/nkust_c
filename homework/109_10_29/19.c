#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b,c;
	printf("判斷一三角形是否為鈍角三角形\n");
	printf("輸入三邊長a,b,c:");
	scanf("%f,%f,%f", &a,&b,&c);
	if (a*a > (b*b+c*c) && b*b > (a*a+b*b) && c*c > (a*a+b*b))
	{
		printf("邊長 %f,%f,%f 的三角形是鈍角三角形", a,b,c);
	}
	else
	{
		printf("邊長 %f,%f,%f 的三角形不是鈍角三角形", a,b,c);
	}
	return 0 ;
}

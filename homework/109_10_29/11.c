#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x,y;
	printf("輸入一座標(x, y)，輸出此座標位於第幾象限\n");
	printf("座標(x,y):");
	scanf("%d,%d", &x,&y);
	if (x>0 & y>0)
	{
		printf("第一象限");
	}
	else if (x>0 & y<0)
	{
		printf("第三象限");	
	}
	else if (x<0 & y<0)
	{
		printf("第四象限");	
	}
	else if (x<0 & y>0)
	{
		printf("第二象限");	
	}
	return 0 ;
}

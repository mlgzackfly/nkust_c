#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x,y;
	printf("��J�@�y��(x, y)�A��X���y�Ц��ĴX�H��\n");
	printf("�y��(x,y):");
	scanf("%d,%d", &x,&y);
	if (x>0 & y>0)
	{
		printf("�Ĥ@�H��");
	}
	else if (x>0 & y<0)
	{
		printf("�ĤT�H��");	
	}
	else if (x<0 & y<0)
	{
		printf("�ĥ|�H��");	
	}
	else if (x<0 & y>0)
	{
		printf("�ĤG�H��");	
	}
	return 0 ;
}

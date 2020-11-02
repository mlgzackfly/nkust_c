#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,n,r;
	printf("輸入一個數:")
	scanf("%d", &n);
	r = 0;
	for (i=1;i<=n;i++)
	{
		r += i*(i+1);
	}
	printf("前%d項之和:%d", n,r);
	return 0 ;
}

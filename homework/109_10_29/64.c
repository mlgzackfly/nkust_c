#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,n,r,r2;
	r = 0;
	
	printf("�p��1*n + 2*(n-1) + 3*(n-2) + 4*(n-3) +...+(n-1)*2+n*1\n");
	printf("��J�@���n:");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		r += i*(n-i+1);
	}
	
	printf("%d", r);
	
	return 0 ;
}

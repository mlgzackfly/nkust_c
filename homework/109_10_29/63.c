#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,n,r;
	printf("��J�@�Ӽ�:")
	scanf("%d", &n);
	r = 0;
	for (i=1;i<=n;i++)
	{
		r += i*(i+1);
	}
	printf("�e%d�����M:%d", n,r);
	return 0 ;
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i,j,count;
	n = 100;
	printf("�p��%d����Ʀ�:\n", n);
	for (i=2;i<=n;i++) 
	{
		for (j=2;j<i;j++)
		{
			if (i%j == 0)
			{
				count += 1;
			}
		}
		if (count == 0)
		{
			printf("%d ",i);
		}
		count = 0;
	}
	return 0 ;
}
//24.	�г]�p�@C�{���A�@�����n�w���A��ܩҦ��p��n�����(���Ψ�Ǧ^�Ȫ����)�C
//10 : 2 3 5 7 
//�P�_�@���n�O�_����ƪ���k�p�U�G�ˬd�Ҧ�����2��n-1����ơA���ǥi�H�㰣n�A�Y���s�b����@��(2��n-1)�i�㰣n�A�hn�����


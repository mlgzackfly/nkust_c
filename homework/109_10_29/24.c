#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i,j,count;
	n = 100;
	printf("小於%d的質數有:\n", n);
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
//24.	請設計一C程式，一正整數n已知，顯示所有小於n的質數(限用具傳回值的函數)。
//10 : 2 3 5 7 
//判斷一整數n是否為質數的方法如下：檢查所有介於2到n-1的整數，哪些可以整除n，若不存在任何一數(2到n-1)可整除n，則n為質數


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float i,n,m,r,r2;
	r = 1;
	r2 = 1;
	
	printf("輸入兩整數N,M:");
	scanf("%f,%f", &n,&m);
	for (i=1;i<=n;i++)
	{
		r*= i;
	}
	for (i=1;i<=n-m;i++)
	{
		r2*=i;
	}
	printf("%f", r/r2);
	return 0 ;
}
//66.	輸入兩整數N，M，輸出排列數 P(N,M)=N!/(N-M)!

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float i,n,k,r,r2,r3;
	printf("��J����N,K:");
	scanf("%f,%f", &n,&k);
	r = 1;
	r2 = 1;
	r3 = 1;
	for (i=1;i<=n;i++)
	{
		r *= i;
	}
	for (i=1;i<=k;i++)
	{
		r2 *= i;
	}
	for(i=1;i<=n-k;i++)
	{
		r3 *= i;	
	}
	printf ("%f", r/(r2*r3));
	return 0 ;
}
//67.	��J����N�BK�A��XC(N,K)=N!/(K!*(N-K)!)�C

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float i;
	float r,r2;
	for (i=1;i<=199;i+=4)
	{
		r += 1.0/i;
	}
	for (i=3;i<=199;i+=4)
	{
		r -= 1.0/i;
	}
	printf("%f", r);
	
	return 0 ;
}

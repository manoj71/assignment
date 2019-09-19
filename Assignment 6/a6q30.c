#include<stdio.h>
void main()
{
	int i,c,j,a=5,b=3;
	for(i=1;i<=6;i++)
	{
		a=5;
		b=3;
		printf("(5)(3)");
		for(j=1;j<i;j++)
		{
			printf("(%d)",(a+b));
			c=a+b;
			a=b;
			b=c;
		}
		printf("\n");
	}
}

	


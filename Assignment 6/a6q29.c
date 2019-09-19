#include<stdio.h>
void main()
{
	int i,j,c,a,b;
	for(i=1;i<=6;i++)
	{
		a=1;
		b=1;
		printf("(a)(b)");
		for(j=1;j<i;j++)
		{
			printf("(%da+%db)",a,b);
			c=a+b;
			a=b;
			b=c;
			
		}
	                printf("\n");
	}
}

	


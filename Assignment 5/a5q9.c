#include<stdio.h>
void main()
{
	int i,j,k=13,c=5,z=2;
	for(i=1;i<10;i++)
	{
		if(i<=3)
		{
			for(j=0;j<20;j++)
			{
				printf("*");
			}
		}
		else
		{
			for(j=1;j<=c;j++)
			{
				printf("*");
			}
			for(j=1;j<=z;j++)
			{
				printf("0");
			}
			for(j=1;j<=k;j++)
			{
				printf("*");
			}
			c--;
			k--;
			z=z+2;
		}
		printf("\n");
	}
}


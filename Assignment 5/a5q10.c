#include<stdio.h>
void main()
{
	int i,j,c=6,k=2,z=12;
	for(i=1;i<=10;i++)
	{
		if(i==1||i==2||i==9||i==10)
		{
	
		if(i==1||i==2)
		{
			for(j=1;j<=20;j++)
			{
				printf("*");
			}
		}
		if(i==9||i==10)
		{
			for(j=0;j<20;j++)
			{
				printf("0");
			}
		}
		}
		else
		{
		for(j=1;j<=c;j++)
		{
			printf("*");
		}
		for(j=1;j<=k;j++)
		{
			printf("0");
		}
		for(j=1;j<=z;j++)
		{
			printf("*");
		}
		c--;
		k=k+3;
		z=z-2;
		}

	printf("\n");
	}
}




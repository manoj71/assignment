#include<stdio.h>
void main()
{
	int i,j,c=6,k=5;
	for(i=1;i<=10;i++)
	{
		if(i==9||i==10)
		{
			for(j=1;j<=20;j++)
			{
				printf("*");
			}
		}
		else
		{
			for(j=1;j<=c;j++)
			{
				printf("0");
			}
			for(j=1;j<=k;j++)
			{
				printf("*");
			}
			for(j=1;j<=9;j++)
			{
				printf("0");
			}
			c--;
			k++;
			if(i==7)
			{
				k--;
			}

		}
		printf("\n");
	}
}


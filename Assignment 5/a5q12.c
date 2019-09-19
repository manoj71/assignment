#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		if(i%2==1)
		{
			for(j=0;j<20;j++)
			{
				printf("*");
			}
		}
		else
		{
			if(i==2||i==4)
			{
				for(j=0;j<20;j++)
				{
					printf("0");
				}
			}
			else
			{
				for(j=0;j<4;j++)
				{
					printf("0");
				}
				for(j=0;j<10;j++)
				{
					printf("*");
				}
				for(j=0;j<6;j++)
				{
					printf("0");
				}
			}
		}
		printf("\n");
	}
}


		

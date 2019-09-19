#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=20;j++)
		{
			if(i<=3)
			{
				if(j<=10)
				{
					printf("0");
				}
				else
				{
					printf("*");
				}
			}
			else if(i>7)
			{
				if(j<=15)
				{
					printf("*");
				}
				else
				{
					printf("0");
				}
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}

	
	




				


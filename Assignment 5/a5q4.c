#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=0;j<29;j++)
		{
			if(i%2==1)
			{
				printf("0");
			}
			else
			{
				if((j%3==0)||(j%5==0))
				{
					printf("*");
				}
				else
				{
					printf("0");
				}
			}
		}
		printf("\n");
	}
}


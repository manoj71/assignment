#include<stdio.h>
void main()
{
	int i,j,k=1,c=3,z=6,s=6;
	for(i=1;i<=10;i++)
	{
		if(i<3)
		{
			printf("0");
			for(j=0;j<7;j++)
			{
				printf("0*");
			}
		}
		else
		{
			if(i%2==1)
			{
				for(j=1;j<=k;j++)
				{
					printf("*");
				}
				printf("0");
				for(j=1;j<=z;j++)
				{
					printf("0*");
				}
				k=k+2;
				z--;
			}
			else
			{
				for(j=1;j<=c;j++)
				{
					printf("0");
				}
				for(j=1;j<=s;j++)
				{
					printf("0*");
				}
			
			c=c+2;
			s--;
			}
		}
		printf("\n");
	}
}

	


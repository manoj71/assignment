#include<stdio.h>
void main()
{
	int i,j,z,a=1;
	for(i=65;i<=70;i++)
	{
		for(j=i;j<=70;j++)
		{
			for(z=1;z<=a;z++)
			{
				printf("%c",j);
			}
		}
		a++;
		printf("\n");
	}
}


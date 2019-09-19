#include<stdio.h>
void main()
{
	int i,j,k=101;
	for(i=65;i<=70;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c",j);
		}
		for(j=97;j<=k;j++)
		{
			printf("%c",j);
		}
		k--;
		printf("\n");
	}
}

	

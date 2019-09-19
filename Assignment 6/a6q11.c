#include<stdio.h>
void main()
{
	int i,j,k=0;
	for(i=65;i<=70;i++)
	{
		for(j=1;j<=k;j++)
		{
			printf(" ");
		}
		for(j=i;j<=70;j++)
		{
			printf("%c",j);
		}
		k++;
		printf("\n");
	}
}


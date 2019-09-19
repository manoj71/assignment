#include<stdio.h>
void main()
{
	int i,j,k=66;
	for(i=97;i<=101;i++)
	{
		for(j=97;j<=i;j++)
		{
			printf("%c",j);
		}
		for(j=k;j<=70;j++)
		{
			printf("%c",j);
		}
		k++;
		printf("\n");
	}
}

	

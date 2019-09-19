#include<stdio.h>
void main()
{
	int i,j,a=1,k=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=a;j++)
		{
			printf("%c",65);
		}
		a=a+k;
		k++;
		printf("\n");
	}
}


#include<stdio.h>
void main()
{
	int i,j,a=4;
	for(i=65;i<70;i++)
	{
		for(j=0;j<=a;j++)
		{
			printf(" ");
		}
		for(j=65;j<=i;j++)
		{
			printf("%c",j);
		}
		for((j=i-1);j>=65;j--)
		{
			printf("%c",j);
		}
		a--;
		printf("\n");
	}
}


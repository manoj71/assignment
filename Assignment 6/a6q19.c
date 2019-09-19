#include<stdio.h>
void main()
{
	int i,j,a=5;
	for(i=70;i>=65;i--)
	{
		for(j=1;j<=a;j++)
		{
			printf(" ");
		}
		for(j=i;j<=70;j++)
		{

			printf("%c",j);
		}
		a--;
		printf("\n");
	}
}


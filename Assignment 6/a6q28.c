#include<stdio.h>
void main()
{
	int i,j,a=1,k=2;
	for(i=1;i<=6;i++)
	{ a=1;k=2;
		for(j=1;j<i;j++)
		{

			printf("%d ",a);
		a=a+k;
		k++;
		}
		printf("\n");
	}
}



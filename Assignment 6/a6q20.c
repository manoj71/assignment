#include<stdio.h>
void main()
{
	int i,j,a=1,k=65;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=a;j++)
		{
			printf("%c",k);
			k++;
		}
		printf("\n");
		a++;
	}
}


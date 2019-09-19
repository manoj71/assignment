#include<stdio.h>
void main()
{
	int i,j,k=65;
	for(i=0;i<6;i++)
	{
		for(j=k;j<=(k+i);j++)
		{
			printf("%c",j);
		}
		k++;
		printf("\n");
	}
}


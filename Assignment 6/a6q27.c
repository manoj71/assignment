#include<stdio.h>
void main()
{
	int i,j,k=7,a=4;
	for(i=1;i<=7;i++)
	{
		for(j=0;j<=(k*a);j=j+a)
		{
			printf("%d,",j);
		}
		k--;
		a++;
		printf("\n");
	}
}

		

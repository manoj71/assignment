#include<stdio.h>
void main()
{
	int i,j,a=1,k;
	for(i=65;i<=70;i++)
	{
		k=65;
		for(j=70;j>=i;j--)
		{
			printf("%c",k);
			k=k+a;
		}
		a=a+1;
		printf("\n");
	}
}

		


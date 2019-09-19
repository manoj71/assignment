#include<stdio.h>
void main()
{
	int i,j,g=65,a=0,s=1;
	for(i=1;i<=5;i++)
	{
		for(j=g;j<=(g+a);j++)
		{
			printf("%c",j);
		}
		a=a+s;
		s++;
		g++;
		printf("\n");
	}
}

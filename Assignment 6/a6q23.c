#include<stdio.h>
void main()
{
	int i,j,a=1,z=0,s=0;
	for(i=85;i>=65;i=i-a)
	{
		for(j=i;j<=(i+s);j++)
		{
			printf("%c",j);
		}
		a++;
		s++;
		printf("\n");
	}
}


#include<stdio.h>
void main()
{
	int x,d;
	for(x=10;x<100;x++)
	{
		d=x/10;
		if((d%3)==1)
		{
			printf("%d ",x);
		}
	}
}

	

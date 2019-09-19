#include<stdio.h>
void main()
{
	int x,d,s;
	for(x=0;x<100;x++)
	{
		d=x/10;
		s=x%10;
		if((d+s)%7==0)
		{
			printf("%d ",x);
		}
	}
}

	

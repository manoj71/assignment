#include<stdio.h>
void main()
{
	int x;
	for(x=1;x<=100;x++)
	{
		if((x<20)||(x>50&&x<70)||(x>90))
		{
			printf("%d ",x);
		}
	}
}


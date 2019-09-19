#include<stdio.h>
void main()
{
	int x,d;
	for(x=0;x<=100;x++)
	{
		d=x%10;
		if((d>=5)&&(d<=8))
		{
			printf("%d ",x);
		}
	}
}


#include<stdio.h>
void main()
{
	int x;
	for(x=1;x<=100;x++)
	{
		if((x%3==0)||(x%5==0))
		{
			if((x%3==0)&&(x%5==0))
			{
			}
			else
			{
				printf("%d ",x);
			}
		}
	}
}


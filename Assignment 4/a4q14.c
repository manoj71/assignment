#include<stdio.h>
void main()
{
	int x,d;
	for(x=0;x<100;x++)
	{
		if((x/10)%2==0)
		{
			if(x%2==1)
			{
				printf("%d ",x);
			}
		}
		if(((x/10)%2==1)&&(x>=10))
		{
			if(x%2==0)
			{
				printf("%d ",x);
			}
		}
	}
}





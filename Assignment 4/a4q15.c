#include<stdio.h>
void main()
{
	int x;
	for(x=0;x<100;x++)
	{
		if(((x/10)%2)!=(x%2))
		{
			printf("%d ",x);
		}
		/*if(((x/10)%2)==(x%2)&&(x>=10))
		{
			printf("%d ",x);
		}*/
	}
}



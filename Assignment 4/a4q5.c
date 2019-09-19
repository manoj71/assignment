#include<stdio.h>
void main()
{
	int x;
	printf("multipes of 3 or 7 are");
	for(x=1;x<=100;x++)
	{
		if((x%3==0)||(x%7==0))
		{
			printf("%d ",x);
		}
	}
}


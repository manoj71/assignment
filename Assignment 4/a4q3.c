#include<stdio.h>
void main()
{
	int x,y;
	printf("even numbers less than 50 are");
	for(x=1;x<50;x++)
	{
		if((x%2)==0)
		{
			printf("%d ",x);
		}
	}
	printf("odd numbers greater than 50 are");
	for(y=50;y<100;y++)
	{
		if((y%2)!=0)
		{
			printf("%d ",y);
		}
	}
}


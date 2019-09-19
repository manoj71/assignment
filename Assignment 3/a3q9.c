#include<stdio.h>
void main()
{
	int a,b,c,d,x;
	printf("enter numbers a b c d x");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
	if(a==x)
	{
		printf("x is equal to a");
	}
	else if(b==x)
	{
		printf("x is equal to b");
	}
	else if(c==x)
	{
		printf("x is equal to c");
	}
	else
	{
		printf("x is equals to d");
	}
}



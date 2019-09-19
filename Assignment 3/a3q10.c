#include<stdio.h>
void main()
{
	int a,b,c,d,x,k=0;
	printf("enter numbers a b c d x");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
	if(x==a)
	{
		k++;
	}
	if(x==b)
	{
		k++;
	}
	if(x==c)
	{
		k++;
	}
	if(x==d)
	{
		k++;
	}
	printf("%d",k);
}



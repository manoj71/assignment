#include<stdio.h>
void main()
{
	int a,b;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("%d\n%d",a,b);
	}
	else
	{
		printf("%d\n%d",b,a);
	}
}


#include<stdio.h>
void main()
{
	int a,b;
	printf("enter a b");
	scanf("%d%d",&a,&b);
	if(a==0&&b!=0)
	{
		printf("%di",b);
	}
	else if(a!=0&&b==0)
	{
		printf("%d",a);
	}
	else if(a==0&&b==0)
	{
		printf("%d",0);
	}
	else
	{
		printf("%d%+di",a,b);
	}
}


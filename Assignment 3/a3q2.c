#include<stdio.h>
void main()
{

	int a,b,c,d,max;
	printf("enter four numbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("the largest number is %d",a);
			}
			else
			{
				printf("the largest number is %d",d);
			}
		}
	}
	else if(b>c)
	{
		if(b>d)
		{
			printf("the largest number is %d",b);
		}
		else
		{
			printf("the largest number is %d",d);
		}
	}
	else if(c>d)
	{
		printf("the largest number is %d",c);
	}
	else
	{
		printf("the largest number is %d",d);
	}

}


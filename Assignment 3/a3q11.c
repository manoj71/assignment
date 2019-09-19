#include<stdio.h>
void main()
{
	int a,k,b,c,s;
	printf("enter a b c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			if(b>c)
			{
				k=b;
			}
			else
			{
				k=c;
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(a>c)
			{
				k=a;
			}
			else
			{
				k=c;
			}
		}
	}
}



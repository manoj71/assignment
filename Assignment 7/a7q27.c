#include<stdio.h>
#include<math.h>
void main()
{
	int a,f,g,dd,e,d,c=0,k,b;
	printf("enter a number");
	scanf("%d",&a);
	b=a;
	while(b>0)
	{
		d=b;
		b=b/10;
		e=d-(b*10);
		c++;
		if(e%2==1)
		{
			k=c;
		}
	}
	if(k!=0)
	{
		f=a/pow(10,(k-1));
		g=a/pow(10,(k-2));
		dd=g-(f*10);
		printf("first even digit=%d",dd);
	}
	else
	{
		printf("no even digit");
	}
}

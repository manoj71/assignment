#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,e,c=0,d;
	printf("enter a number");
	scanf("%d",&a);
	d=a;
	while(d>0)
	{
		d=d/10;
		c++;
	}
	if(c>2)
	{
	b=a/pow(10,(c-1));
	d=a/pow(10,(c-2));
	e=d-(b*10);
	printf("second digit=%d",e);
	}
	else if(c==2)
	{
		b=a/10;
		e=a-(b*10);
	
	printf("second digit=%d",e);
	}
	else
	{
		printf("no second digit");
	}

}


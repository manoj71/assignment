#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c=0,d=0,e,f,p;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	e=a;
	f=b;
	while(e>0)
	{
		e=e/10;
		c++;
	}
	while(f>0)
	{
		f=f/10;
		d++;
	}
	a=a/pow(10,(c-1));
	b=b/pow(10,(d-1));
	p=a*b;
	printf("product of first digit=%d",p);
}


#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,d,e,k,c=0;
	printf("enter a number");
	scanf("%d",&a);
	printf("Input:%d",a);
	b=a;
	while(b>0)
	{
		b=b/10;
		c++;
	}
	if(c>4)
	{
		d=a/pow(10,(c-4));
		e=a/pow(10,(c-4+1));
		k=d-(10*e);
		printf("\noutput:%d",k);
	}
	else if(c==4)
	{
		d=a/10;
		k=a-(10*d);
		printf("\noutput:%d",k);
	
	}
	else
	{
		printf("\nno 4th digit");
	}
}

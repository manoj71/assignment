#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,d,e,k,z,c=0;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter k");
	scanf("%d",&k);
	printf("Input:%d",a);
	b=a;
	while(b>0)
	{
		b=b/10;
		c++;
	}
	if(c>k)
	{
		d=a/pow(10,(c-k));
		e=a/pow(10,(c-k+1));
		z=d-(10*e);
		printf("\noutput:%d",z);
	}
	else if(c==k)
	{
		d=a/10;
		z=a-(10*d);
		printf("\noutput:%d",z);
	
	}
	else
	{
		printf("\nno %d digit",k);
	}
}

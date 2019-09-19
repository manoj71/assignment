#include<stdio.h>
void main()
{
	int n,s=0,i,a,e,b,c,d;
	printf("enter n");
	scanf("%d",&n);
	printf("enter %d numbers",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		
		b=a%10;
		a=a/10;
		e=a%10;
		d=b*e;
		s=s+d;
	}
	printf("sum of the products of last two digits of numbers=%d",s);
}

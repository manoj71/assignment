#include<stdio.h>
void main()
{
	int n,s=0,i,a,b,c,d;
	printf("enter n");
	scanf("%d",&n);
	printf("enter %d numbers",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		c=a/100;
		b=a%10;
		d=c*10+b;
		s=s+d;
	}
	printf("sum of numbers after deleting second  last digits=%d",s);
}

#include<stdio.h>
void main()
{
	int n,s=0,i,d,a;
	printf("enter n");
	scanf("%d",&n);
	printf("enter %d numbers",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		a=a/10;
		d=a%10;
		s=s+d;
	}
	printf("sum of second last digits=%d",s);
}

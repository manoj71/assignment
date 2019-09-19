#include<stdio.h>
void main()
{
	int n,s=0,i,a;
	printf("enter n");
	scanf("%d",&n);
	printf("enter %d numbers",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		a=a/10;
		s=s+a;
	}
	printf("sum of of numbers after deleting last digits=%d",s);
}

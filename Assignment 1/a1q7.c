#include<stdio.h>
void main()
{
	int n,a,b,s;
	printf("enter a number");
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	b=n%10;
	s=a+b;
	printf("sum of last two digit is %d",s);
}


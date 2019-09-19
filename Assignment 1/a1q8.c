#include<stdio.h>
void main()
{
	int n,a;
	printf("enter a number");
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	n=(n*10)+(a*2);
	printf("output=%d",n);
}


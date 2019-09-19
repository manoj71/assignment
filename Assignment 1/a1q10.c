#include<stdio.h>
void main()
{
	int n,a,b;
	printf("enter a number");
	scanf("%d",&n);
	a=n%10;
	b=(n/10)%10;
	n=n/100;
	n=(n*100)+(a*10)+b;
	printf("output=%d",n);
}



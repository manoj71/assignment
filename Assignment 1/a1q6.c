#include<stdio.h>
void main()
{
	int n,d;
	printf("enter a number");
	scanf("%d",&n);
	n=n/10;
	d=n%10;
	printf("second last digit=%d",d);
}


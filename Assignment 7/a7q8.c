#include<stdio.h>
void main()
{
	int a1,b1,a2,b2;
	signed int a,b;
	printf("enter a1 b1 a2 b2 of a1+b1i and a2+b2i");
	scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
	a=a1+a2;
	b=b1+b2;
	printf("addition if two complex number is %+d%+di",a,b);
}


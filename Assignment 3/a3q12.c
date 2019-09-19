#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	float p,k,q,r,a,b,c,d,area;
	printf("enter p q r a b c");
	scanf("%f%f%f%f%f%f",&p,&q,&r,&a,&b,&c);
	d=abs((a*p+b*q+c))/sqrt((a*a)+(b*b));
	if(d==r)
	{
		printf("the line only touches the circle");
	}
	else if(d<r)
	{
		k=sqrt((r*r)-(d*d));
		area=0.5*(2*k)*d;
		printf("area=%.1f",area);
	}
	else
	{
		printf("line do not intersect the circle");
	}
}




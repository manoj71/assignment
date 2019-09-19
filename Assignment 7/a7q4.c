#include<stdio.h>
void main()
{
	float a,b,c,d,x,y;
	printf("enter coordinates of two points");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	x=(a+c)/2;
	y=(b+d)/2;
	printf("(%.2g,%.2g)",x,y);
	
}


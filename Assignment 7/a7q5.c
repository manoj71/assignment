#include<stdio.h>
#include<stdlib.h>
void main()
{
	float a,b,c,d,e,f,p;
	printf("enter a,b,c,d,e,f of vectors ax+by+cz and dx+ey+fz");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	p=(a*d)+(b*e)+(c*f);
	printf("%.0f",p);
}


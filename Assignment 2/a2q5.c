#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,e,s;
	printf("enter coordinates of apoint");
	scanf("%f%f",&a,&b);
	printf("enter c,d,f");
	scanf("%f%f%f",&c,&d,&e);
	s=(a*c+b*d+e)/(sqrt(c*c+d*d));
	printf("distance between a point and a line is=%f",s);
}



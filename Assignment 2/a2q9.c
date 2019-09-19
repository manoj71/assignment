#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	float k,a,b,c,d,e,f,g,h,R,s,x,r,area;
	printf("enter the a b c d e f g h");
	scanf("%f%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g,&h);
	R=sqrt(((e/2)*(e/2))+((f/2)*(f/2))+((g/2)*(g/2))-h);
	k=abs((a*((-e)/2))+(b*((-f)/2))+(c*((-g)/2))+d);
		s=sqrt((a*a)+(b*b)+(c*c));
	x=k/s;
	r=sqrt((R*R)-(x*x));
	area=(3.14*r*r);
printf("area of circle=%.2f",area);
printf("centre of sphere is=(%.0f,%.0f,%.0f).",(-e/2),(-f/2),(-g/2));
	printf("its distance from the plane is%.1f.",x);
	printf("radius of sphere is%.1f.",R);
	printf("radius of circle of intersection is%.1f.",r);
}


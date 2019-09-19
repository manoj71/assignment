#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,e;
	printf("enter sides of triangle ");
	scanf("%f%f%f",&a,&b,&c);
	d=((b*b)+(c*c)-(a*a))/(2*b*c);
	e=(acos(d)*180)/3.14;
	printf("angle A in radian=%.1f and in angle=%.1f",acos(d),e);
}


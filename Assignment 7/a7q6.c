#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d;
	printf("enter a,b,c of vector ax+by+cz");
	scanf("%f%f%f",&a,&b,&c);
	d=sqrt((a*a)+(b*b)+(c*c));
	printf("%.1fx+%.1fy+%.1fz",(a/d),(b/d),(c/d));
}




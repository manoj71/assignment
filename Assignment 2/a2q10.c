#include<stdio.h>
#include<math.h>
void main()
{
	float h,k,r,s,d;
	printf("enter h k r s");
	scanf("%f%f%f%f",&h,&k,&r,&s);
	k=sqrt((h-s)*(h-s)+(k-k));
	d=sqrt((r*r-k*k));
	d=2*d;
	printf("chord lenght=%.1f",d);
}


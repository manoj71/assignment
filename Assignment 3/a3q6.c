#include<stdio.h>
#include<math.h>
void main()
{
	float a,k,b,c,d,e;
	printf("enter a b c");
	scanf("%f%f%f",&a,&b,&c);
	k=(b*b)-(4*a*c);
	if(k>0)
	{
		d=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
		e=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
		printf("roots are real and distinct %.1f %.1f",d,e);
	}
	if(k==0)
	{
		d=(-b/(2*a));
		printf("roots are real and equal %.1f",d);
	}
	else
	{
		printf("real part=%.1f and imaginary part=%.1f",(-b/(2*a)),sqrt((-k))/(2*a));
	}
}





#include<stdio.h>
#include<math.h>
void main()
{
	float a,w,q,b,c,d,e,k;
	printf("enter a b c ");
	scanf("%f%f%f",&a,&b,&c);
	k=(b*b)-(4*a*c);
	if(k>0)
	{
		d=((-b)+sqrt((b*b)-(4*a*c)))/(2*a);
		e=((-b)+sqrt((b*b)-(4*a*c)))/(2*a);
		printf("roots are real %.1f %.1f",d,e);
	}
	if(k==0)
	{
		printf("roots are real and equal=%.1f",(-b/(2*a)));
	}
	if(k<0)
	{
		w=(-b/(2*a));
		q=sqrt(-k)/(2*a);
		printf("roots are imaginary and are %.1f+%.1fi and %.1f-%.1fi",w,q,w,q);
	}
}


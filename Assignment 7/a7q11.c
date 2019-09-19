#include<stdio.h>
#include<math.h>
void main()
{
	float a,e,f,b,c,d;
	printf("enter a b c");
	scanf("%f%f%f",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if(d>0)
	{
		printf("%.1f and %.1f",((-b)-sqrt(d))/(2*a),((-b)+sqrt(d))/(2*a));
	}
	else if(d==0)
	{
		printf("%.1f and %.1f",(-b/(2*a)),(-b/(2*a)));
	}
	else
	{
		e=sqrt(-d)/(2*a);
		f=-b/(2*a);
		printf("%+.1f+%.1fi and %+.1f-%+.1fi",f,e,f,e);
	}
}


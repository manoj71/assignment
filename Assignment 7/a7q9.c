#include<stdio.h>
void main()
{
	float a,b,c,d;
	 float a1,a2,i,j;
	printf("enter a b c d of complex numbers a+bi and c+di");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	a1=((a*c)-(b*d));
	a2=((a*d)+(b*c));
	i=((a*c)+(b*d))/((c*c)+(d*d));
	j=((b*c)-(a*d))/((c*c)+(d*d));
	printf("multiplication = %+.6g%+.6gi",a1,a2);
	printf("division= %+.6g%+.6gi",i,j);
}

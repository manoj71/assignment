#include<stdio.h>
#include<math.h>
void main()
{
	int a1,a2,a3,b1,b2,b3;
	signed int a,b,c;
	printf("enter a1 a2 a3 b1 b2 b3 of vector equation");
	scanf("%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3);
	a=(a2*b3)-(a3*b2);
	b=(a3*b1)-(a1*b3);
	c=(a1*b2)-(a2*b1);
	printf("%+di%+dj%+dk",a,b,c);

}


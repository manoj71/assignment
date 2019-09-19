#include<stdio.h>
#include<math.h>
void main()
{
	float a,w,e,b,c,s;
	printf("enter a b c");
	scanf("%f%f%f",&a,&b,&c);
	if(b==0)
	s=-a/b;
	printf("slope=%.1f\n",s);
	if(b==0)
	{
		printf("the line is vertical");
	}
	else
	{
		printf("the line is not vertical");
	}
}



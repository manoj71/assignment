#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter sides of traingle");
	scanf("%d%d%d",&a,&b,&c);
	if((a*a)==((b*b)+(c*c)))
	{
		printf("angle A is 90");
	}
	else
	{
		printf("angle A is not 90");
	}
}


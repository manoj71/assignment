#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d,e,f;float area;
	printf("enter coordinates of traingle");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	area=0.5*((a*(d-f))+(c*(f-b))+(e*(b-d)));
	printf("area=%f",area);
}

	

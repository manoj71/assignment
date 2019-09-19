#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d;float k;
	printf("enter coordinates of two points");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	k=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	printf("distance between points is=%f",k);
}



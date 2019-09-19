#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,r;
	printf("enter a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	r=sqrt((a/2)*(a/2)+(b/2)*(b/2)-c);
	printf("coordinates of a circle =(%.1f,%.1f)",a/2,b/2);
	printf("radius=%.1f",r);
}



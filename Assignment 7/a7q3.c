#include<stdio.h>
void main()
{
	float a,b,c,d;
	printf("enter 4 numbers");
	scanf("%f%f%f%f\n",&a,&b,&c,&d);
	printf("%-20.3f\t%-20.3f\n",a,b);
	printf("%-20.5f\t%-20.1f\n",c,d);
}


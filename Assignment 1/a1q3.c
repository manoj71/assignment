#include<stdio.h>
void main()
	{
		int a,b,c,p,f;
		printf("enter four numbers");
		scanf("%d%d%d%d",&a,&b,&c,&p);
		f=(a*(p*p))+(b*p)+c;
		printf("value of function at %d is %d",p,f);
	}


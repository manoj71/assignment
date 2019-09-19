#include<stdio.h>
void main()
{
	int n,a,s=0,i;
	printf("enter n");
	scanf("%d",&n);
	printf("enter numbers");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(a>30&&a<90)
		{
			s=s+a;
		}
	}
	printf("the sum of numbers lying between 30 and 90=%d",s);
}


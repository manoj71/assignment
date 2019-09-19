#include<stdio.h>
void main()
{
	int n,a,i,b=1,c,s=0;
	printf("enter n");
	scanf("%d",&n);
	printf("enter numbers");
	scanf("%d",&a);
	c=a;
	
	b=a;
	for(i=1;i<n;i++)
	{
		
		scanf("%d",&a);
		s=s+(b*a);
		b=a;

	}
	printf("sum of product two consecutive numbers=%d",s);
}

			
		

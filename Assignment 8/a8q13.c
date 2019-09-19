#include<stdio.h>
void main()
{
	int n,a,c=0,i;float s=0;
	printf("enter n");
	scanf("%d",&n);
	printf("enter numbers");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(a%2!=0)
		{
			s=s+a;
			c++;
		}
		
	}
	s=s/c;
	printf("the average of odd numbers=%.10g",s);
}


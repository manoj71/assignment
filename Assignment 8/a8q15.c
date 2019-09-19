#include<stdio.h>
void main()
{
	int n,i,a,c=0;float s=0;
	printf("enter n");
	scanf("%d",&n);
	printf("enter numbers");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(a%2==0)
		{
			s=s+(a*i);
			c=c+i;
		}
	}
	s=s/c;
	printf("the average weighted sum of even numbers=%.2f",s);
}


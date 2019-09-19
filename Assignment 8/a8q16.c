#include<stdio.h>
void main()
{
	int n,i,c=1,s=0,a,b;
	printf("enter n");
	scanf("%d",&n);
	printf("enter numbers");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(a%2==0)
		{
			s=s+(a*c);
			c++;
		}
	}
	printf("the weighted sum of even numbers=%d",s);
}

	

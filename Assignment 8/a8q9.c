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
		if(a%2!=0)
		{
			s=s+a;
		}
	}
	printf("the sum of odd numbers=%d",s);
}


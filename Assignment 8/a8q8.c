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
		s=s+(a*i);
	}
	printf("the weighted sum of these numbers=%d",s);
}


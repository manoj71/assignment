#include<stdio.h>
void main()
{
	int n,a,b,i;
	printf("enter n");
	scanf("%d",&n);
	printf("enter numbers");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(a%2==0)
		{
			b=a;
		}
	}
	printf("the last even number is=%d",b);
}


	

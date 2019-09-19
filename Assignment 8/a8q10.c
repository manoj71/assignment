#include<stdio.h>
void main()
{
	int n,a,s=0,i,c=0;
	printf("enter n");
	scanf("%d",&n);
	printf("enter numbers");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(a%2!=0)
		{
			c++;
		}
	}
	printf("the number of odd numbers=%d",c);
}


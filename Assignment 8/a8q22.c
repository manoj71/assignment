#include<stdio.h>
void main()
{
	int n,a,i,b=1,s=0,k=1;
	printf("enter n");
	scanf("%d",&n);
	printf("enter numbers");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(i==k)
		{
			s=s+a;
		
		k=k+b;
		b++;
		}

	}
	printf("sum=%d",s);
}

			


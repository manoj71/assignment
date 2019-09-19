#include<stdio.h>
void main()
{
	int n,a,i,k=0,s=0,b;
	printf("enter n");
	scanf("%d",&n);
	printf("enter numbers");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if((a%2==0)&&(k==0))
		{
			
			k=1;
			s=s-a;
		}
		if(k==1)
		{
			s=s+a;
		}
		
	}
	
	printf("sum of all numbers after first even number=%d",s);
}


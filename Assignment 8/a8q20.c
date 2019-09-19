#include<stdio.h>
void main()
{
	int n,c,a,i,b=0,s=0,k;
	printf("enter n");
	scanf("%d",&n);
	printf("enter k");
	scanf("%d",&k);
	printf("enter numbers");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if((a%2==0)&&(b<k))
		{
			
			b++;
			c=a;
		}
		if(b==k)
		{
			s=s+a;
		}
	}
	s=s-c;
	printf("sum of all numbers after %d even number=%d",k,s);
}


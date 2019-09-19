#include<stdio.h>
void main()
{
	int n,a,c,b=0,i,k=0,s=0;
	printf("enter n");
	scanf("%d",&n);
	printf("enter numbers");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if((a%2==0)&&(k==0))
		{
			k=1;
		}
		else if((k==1)&&(b==0))
		{
			if(a%2==0)
			{
				b=1;
				c=a;
			}
			else
			{
				k=0;
			}
		}
		if((k==1)&&(b==1))
		{
			s=s+a;
		}
	}
	s=s-c;
	printf("sum of all numbers after two consecutive even number=%d",s);
}


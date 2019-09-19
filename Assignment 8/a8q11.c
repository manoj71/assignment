#include<stdio.h>
void main()
{
	int n,a,s=0,i,b;
	printf("enter n");
	scanf("%d",&n);
	printf("enter numbers");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		b=a%10;
		if(b%3==0)
		{
			s=s+a;
		}
	}
	printf("the sum numbers whose last digit is multiple of 3=%d",s);
}


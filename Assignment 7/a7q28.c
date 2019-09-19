#include<stdio.h>
#include<math.h>
void main()
{
	int n,a,b,s=0,s1=0;
	printf("enter n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("enter a b of %d complex number a+bi",i);
		scanf("%d%d",&a,&b);
		s=s+a;
		s1=s1+b;
	}
	printf(" sum of %d complex numbers=%d%+di",n,s,s1);
}

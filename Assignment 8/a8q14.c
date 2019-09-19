#include<stdio.h>
void main()
{
	int n,s=0,i,a,e,b,c,d;
	printf("enter n");
	scanf("%d",&n);
	printf("enter %d numbers",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		b=a%10;
		a=a/10;
		c=a%10;
		a=a/10;
		if(b<c)
		{
		d=a*100+b*10+c;
		s=s+d;
		}
		else
		{
			d=a*100+c*10+b;
			s=s+d;
		}
	}
	printf("sum after sorting last two digits of numbers=%d",s);
}

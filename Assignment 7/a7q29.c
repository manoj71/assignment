#include<stdio.h>
#include<math.h>
void main()
{
	int n,s=0,k,a[100];
	printf("enter n");
	scanf("%d",&n);
	printf("enter 2n numbers");
	for(int i=0;i<(2*n);i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<(2*n);i++)
	{
		if(i==(2*n-1))
		{
			printf("%d",a[i]);
		}
		else
		{
			printf("%d,",a[i]);
		}
	}
	printf("\n");
	for(int i=0;i<(2*n);i=i+2)
	{
		k=pow(a[i],a[i+1]);
		s=s+k;
		if(i==(2*n-1)||(i==(2*n-2)))
		{
			printf("%d^%d=",a[i],a[i+1]);
		}
		else
		{
			printf("%d^%d+",a[i],a[i+1]);
		}
	}
	for(int i=0;i<(2*n);i=i+2)
	{
		k=pow(a[i],a[i+1]);
		if(i==(2*n-1)||(i==(2*n-2)))
		{
			printf("%d",k);
		}
		else
		{
			printf("%d+",k);
		}
	}
	printf("=%d",s);
}


		

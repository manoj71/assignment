#include<stdio.h>
void main()
{
	int n,arr[100],s=0,i;
	printf("enter n");
	scanf("%d",&n);
	printf("enter numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Input:%d,",n);
	for(i=0;i<n;i++)
	{
		if(i==(n-1))
		{
			printf("%d",arr[i]);
		}
		else
		{

		printf("%d,",arr[i]);
		}
	}
	printf("\noutput:");
	for(i=0;i<n;i++)
	{
		if(i==(n-1))
		{
			printf("%d",arr[i]);
		}
		else
		{
		printf("%d+",arr[i]);
		s=s+arr[i];
		}

	}
	printf("=%d",s);
}

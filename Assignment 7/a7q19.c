#include<stdio.h>
void main()
{
	int a[100][100],i,j,n,s=0,s1=1;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d pair",(i+1));
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
			s1=s1*a[i][j];
			
		}
		s=s+s1;
		s1=1;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			if(i==(n-1)&&(j==(1)))
			{printf("%d",a[i][j]);
			}
			else if(j==(1))
			{
			printf("%d+",a[i][j]);
			}
			else
			{
				printf("%dx",a[i][j]);
			}
		}
	}
	printf("=%d",s);
}


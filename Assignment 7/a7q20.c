#include<stdio.h>
void main()
{
	int a[100][100],i,j,n,m,s=0;
	printf("enter n and m");
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		printf("enter %d set of numbers",(i+1));
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
			s=s+a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==(n-1)&&(j==(m-1)))
			{printf("%d",a[i][j]);
			}
			else
			{
			printf("%d+",a[i][j]);
			}
		}
	}
	printf("=%d",s);
}


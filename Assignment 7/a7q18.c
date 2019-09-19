#include<stdio.h>
#include<math.h>
void main()
{
	int n,i,a,s=0;
	float k;
	printf("enter n");
	scanf("%d",&n);
	printf("enter %d vector values",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		s=s+(a*a);
	}
	k=sqrt(s);
	printf("magnitude of vector=%.6g",k);
}


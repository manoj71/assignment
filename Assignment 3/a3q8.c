#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	printf("enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b)
	{
		printf("%d",c);
	}
	else if(b==c)
	{
		printf("%d",a);
	}
	else
	{
		printf("%d",b);
	}
}

	

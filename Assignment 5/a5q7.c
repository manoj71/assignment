#include<stdio.h>
void main()
{
	int i,j,k=6,z=5,a=2,d=4;
	for(i=1;i<=11;i++)
	{
		if((i!=1)&&(i!=11))
		{
			for(j=1;j<=k;j++)
			{
				printf("0");
			}
			for(j=1;j<=z;j++)
			{
				printf("*");
			}
			for(j=1;j<=k;j++)
			{
				printf("0");
			}
			if(i==7)
			{
				a=1;
				d=2;
				k=3;
				z=11;
			}
			if(i>1&&i<4)
			{
				k=k-a;
				z=z+d;
				a--;
				d=d-2;
			}
			if(i>7&&i<11)
			{
				k=k+a;
				z=z-d;
				a++;
				d=d+2;
			}
			if(i>=4&&i<=6)
			{
				k=2;
				z=13;
			}
		}
		if(i==1||i==11)
		{
			for(j=1;j<=17;j++)
			{
				printf("0");
			}
		}
		printf("\n");
		
	}

}



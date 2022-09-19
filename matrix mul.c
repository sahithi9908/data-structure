#include<stdio.h>
int main()
{
	int r1,c1,r2,c2,a[40][40],b[40][40],sum[40][40],i,j,x;
	printf("enter no of rows and column");
	scanf("%d%d",&r1,&c1);
	printf("enter 1st matrix \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter 2nd matric \n");
	printf("enter no of rows and column");
	scanf("%d%d",&r2,&c2);
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(x=0;x<r1;x++)
			{
			sum[i][j]+=a[i][x]*b[x][j];
		}
		}
	}
	printf("sum of matrix is \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
		
	}
	return 0;
}

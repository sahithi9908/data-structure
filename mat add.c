#include<stdio.h>
int main()
{
	int r,c,a[40][40],b[40][40],sum[40][40],i,j;
	printf("enter no of rows");
	scanf("%d",&r);
	printf("enter no of column");
	scanf("%d",&c);
	printf("enter 1st matrix \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("/nenter 2nd matric \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("sum of matrix is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
		
	}
	return 0;
}

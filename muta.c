#include<stdio.h>
int main()
{
	printf("MATRIX MULTIPLICATION\n");
	int rows,columns,a,b,re,z,y;
	printf("Rows and columns\n");
	scanf("%d\n%d",&rows,&columns);
	int arr1[rows][columns],arr2[rows][columns],i,j,k,l,c,ans[rows][columns];
	printf("Matrix 1\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Matrix 2\n");
	for(k=0;k<rows;k++)
	{
		for(l=0;l<columns;l++)
		{
			scanf("%d",&arr2[k][l]);
		}
	}
	for(c=0;c<rows;c++)
	{
		for(a=0;a<rows;a++)
		{
			re=0;
			for(b=0;b<columns;b++)
			{
				re=re+arr1[c][b]*arr2[b][a];
				//printf("mat 1: %d",arr1[a][b]);
				//printf("mat 2: %d",arr2[b][a]);
				//printf("%d\t",re);	
			}
			ans[c][a]=re;
			//printf("\n");
		}
	}
	printf("Multiplied matrix:\n");
	for(z=0;z<rows;z++)
	{
		for(y=0;y<columns;y++)
		{
			printf("%d\t",ans[z][y]);
		}
		printf("\n");
	}
	return 0;
}

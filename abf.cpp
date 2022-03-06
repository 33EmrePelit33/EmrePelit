#include<stdio.h>
int main(void)
{
	int i,j,n,k;
	int mat[n][k];
	printf("n ve k degerleri(0'dan buyuk):");
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			if(i==j)
				printf("1");
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	return(0);
}

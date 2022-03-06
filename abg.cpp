#include<stdio.h>
int main()
{
	int n,i,j,a,b;
	int m1[n][n],m2[n][n],t[n][n];
	printf("a,b ve n tamsayilari:");
	scanf("%d%d%d",&a,&b,&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				printf("%5d",a);
			else
				printf("%5d",b);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				printf("%5d",a);
			else
				printf("%5d",b);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<1;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",2*(a+(n-1)*b));
		}
		printf("\n");
	}
	return 0;
}

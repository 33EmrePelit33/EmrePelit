#include<stdio.h>
int main()
{
	int n,i,j;
	printf("n degerini giriniz:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
			printf("a");
		printf("1");
		for(j=i+1;j<n;j++)
			printf("b");
		printf("\n");
	}
	return 0;
}

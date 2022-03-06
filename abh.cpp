#include<stdio.h>
int main()
{
	int i,j;
	char a[3][3]={{'a','b','c'},{'d','e','f'},{'g','h','i'}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5c  ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

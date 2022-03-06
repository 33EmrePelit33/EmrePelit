#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,j=0,k[2][5];
	double us=2,carpim=1;
	while(i<2)
	{
		while(j<5)
		{
			printf("k[%d][%d] yerine bir tamsayi gir:\n",i,j);
			scanf("%d",&k[i][j]);
			j++;
		}
		i++;
	}
	for(i=0,j=0;i<2,j<5;i++,j++)
	{
		carpim*=k[i][j];
		printf("%lf\n",&carpim);
	}
	for(i=0,j=0;i<2,j<5;i++,j++)
	{
		us=pow(us,carpim);
		printf("%lf\n",&us);
	}
	return 0;
}

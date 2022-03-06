#include<stdio.h>
#include<math.h>
int main()
{
	int i,can[25];
	for(i=1;i<=25;i++)
	{
		can[i]=pow(i,i);
		printf("can[%d]=%d\n",i,can[i]);
	}
	return 0;
}

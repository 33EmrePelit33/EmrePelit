#include<stdio.h>
int main()
{
	int k1=2,k2=8,a=35,y;
	for(y=0;k1+k2<=a;y++)
	{
		k1++;
		k2++;
		a++;
	}	
	printf("%d",y);
	return 0;
}

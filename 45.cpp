#include<stdio.h>
int main(void)
{
	int k1,k2,a,y;
	printf("k1,k2 ve annenin yaslarini giriniz:");
	scanf("%d%d%d",&k1,&k2,&a);
	while(k1+k2<=a)
	{
		k1++;
		k2++;
		a++;
		y++;
	}
	printf("k1+k2 a'yi %d yil sonra gecer.",y);
	return 0;
}

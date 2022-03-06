#include <stdio.h>
int main(void)
{
	int nott[5][4];
	int i,j,toplam;
	double ort;
	for(i=0;i<5;++i)
	{
		for(j=0;j<4;j++)
		{
			printf("%d.ogrencinin %d. notu:",i+1,j+1);
			scanf("%d",&nott[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		toplam=0.0;
		for(j=0;j<4;j++)
			toplam+=nott[i][j];
		ort=toplam/4.0;
		printf("%d. ogrencinin sinavlardaki not ortalamasi=%5.2f\n",i+1,ort);
	}
	return(0);
}

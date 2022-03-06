#include <stdio.h>
void ortalama(int ogr_sa,int sinav_sa,int nott[][3],double ort[])
{
	double toplam;
	int i,j;
	for(i=0;i<ogr_sa;i++)
	{
		toplam=0;
		for(j=0;j<sinav_sa;j++)
			toplam+=nott[i][j];
		ort[i]=toplam/3.0;
	}
}
int main(void)
{
	int test[2][3];
	int i,j,toplam;
	double averaj[2];
	for(i=0;i<2;++i)
	{
		printf("%d. ogrenci notlari:",i+1);
		for(j=0;j<3;++j)
			scanf("%d",&test[i][j]);
	}
	ortalama(2,3,test,averaj);
	for(i=0;i<2;++i)
		printf("%d. ogrenci ortalamasi=%5.2f\n",i+1,averaj[i]);
	return(0);
}

#include <stdio.h>
#include <string.h>
struct ogrenciler
{
	int no;
	char cevap[3];
};
struct sonuclar
{
	int no;
	float notu;
};

int main(void)
{
	struct ogrenciler sinif[2];
	struct sonuclar sonuc[2];
	char anahtar[2];
	int i,j,dogru,yanlis;
	printf("Cevap anahtarini giriniz:");
	for(i=0;i<3;i++)
		scanf(" %c",&anahtar[i]);
	printf("Ogrenci bilgilerini giriniz:\n");
	for(j=0;j<2;j++)
	{
		printf("\nOgrenci no:");
		scanf("%d",&sinif[j].no);
		dogru=0;
		yanlis=0;
		printf("Cevaplari:");
		for(i=0;i<3;i++)
		{
			scanf(" %c",&sinif[j].cevap[i]);
			if(anahtar[i]==sinif[j].cevap[i])
				dogru++;
			else if(sinif[j].cevap[i]!=' ')
				yanlis++;
		}
		sonuc[j].no=sinif[j].no;
		printf("Dogru:%d Yanlis:%d",dogru,yanlis);
		sonuc[j].notu=dogru-(yanlis/4.0);
	}
	for(j=0;j<2;j++)
		printf("\nOgrenci no:%d Not:%.2f\n",sonuc[j].no,sonuc[j].notu);
	return 0;
}

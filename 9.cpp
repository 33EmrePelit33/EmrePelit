#include <stdio.h>
int main(void)

{
	int a[5];
	int i,toplam;
	double orta;
	//Kullanici degerlerinin dizide saklanmasi
	printf("5 tamsayi giriniz:");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	//Toplam ve ortalamanin bulunmasi
	for(i=0;i<5;i++)
		toplam+=a[i];
	orta=toplam/5.0;
	printf("Ortalama=%5.2lf",orta);
	return(0);
}

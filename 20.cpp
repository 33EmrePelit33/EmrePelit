#include <stdio.h>
int main(void)
{//Soru metni:Bir s dizisine girilen en fazla 30 pozitif sayının ortalamasını hesaplayan, bir negatif sayı girildiğinde programı sonlandıran bir C++ kodu yazınız.
//Soru metni bana ait. Kitaptan değil yani.
	int s[30];
	int sayi,i;
	int toplam=0;
	double n=0.0;
	double ort;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	do
	{
		toplam+=sayi;
		n+=1;
		ort=toplam/n;
		printf("Ortalama=",ort);
	}while(sayi>0);
	return 0;	
}

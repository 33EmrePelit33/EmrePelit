#include <stdio.h>
int main(void)
{//Soru metni:Bir s dizisine girilen en fazla 30 pozitif say�n�n ortalamas�n� hesaplayan, bir negatif say� girildi�inde program� sonland�ran bir C++ kodu yaz�n�z.
//Soru metni bana ait. Kitaptan de�il yani.
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

#include <stdio.h>
int main(void)
{//Soru metni:Bir s dizisine girilen en fazla 30 pozitif sayýnýn ortalamasýný hesaplayan, bir negatif sayý girildiðinde programý sonlandýran bir C++ kodu yazýnýz.
//Soru metni bana ait. Kitaptan deðil yani.
	int i=0;
	int n=0;
	double s[30];
	double toplam=0.0;
	double sayi;
	double ort;
	printf("Bir sayi giriniz:");
	scanf("%lf",&s[i]);
	while(s[i]>0)
	{
		toplam+=s[i];
		n+=1;
		i++;
		if(i==30)
	 	break;
		else 
		{
			printf("Bir sayi giriniz:");
			scanf("%lf",&s[i]);
		}	
	};
	ort=toplam/n;
	printf("Ortalama=%.8f",ort);
	return 0;	
}

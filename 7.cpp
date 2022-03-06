#include <stdio.h>
int main(void)
{
	int k1,k2,cevre,alan,sayi;
	printf("2 kenar ve 1 veya 2 rakamlarindan birini giriniz:");
	scanf("%d%d%d",&k1,&k2,&sayi);
	cevre=2*(k1+k2);
	alan=k1*k2;
	if(sayi==1)	
		printf("Dikdortgenin alani=%d",alan);
	else if(sayi==2)		
		printf("Dikdortgenin cevresi=%d",cevre);
	else	printf("Son girilen sayi 1 ve 2'nin disinda olamaz.");
	return 0;	
}

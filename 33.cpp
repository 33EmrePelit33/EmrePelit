#include <stdio.h>
int main(void)
{
	int s1,s2,cevre,alan;
	char secim;
	printf("2 kenar giriniz:");
	scanf(" %d%d",&s1,&s2);
	printf("Bir karakter giriniz:",secim);
	scanf(" %c",&secim);
	alan=s1*s2;
	cevre=2*(s1+s2);
	switch (secim)
	{
		case 'A':
		case 'a':printf("Dikdortgenin alani= %d",alan);
		break;
		case 'C':
		case 'c':printf("Dikdortgenin cevresi= %d",cevre);
		break;
		default:printf("Islem yapilmasi icin A, a, C veya c girmeliydiniz:(");
	}
	return 0;
}

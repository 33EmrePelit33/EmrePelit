#include <stdio.h>
int main(void)
{
	int a[5];
	int i,toplam;
	double orta;
	printf("5 tamsayi giriniz:");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	toplam=0;
	for(i=0;i<5;++i)
		toplam+=a[i];
	orta=toplam/5.0;
	printf("Ortalama=%lf",orta);
	return(0);
}

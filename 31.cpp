#include<stdio.h>
#include<math.h>
int main(void)
{
	double k1,k2;
	int secim;
	char sekil;
	printf("2 ondalikli sayi kenar uzunlugu giriniz:\n");
	scanf(" %lf%lf",&k1,&k2);
	printf("Bir tam sayi giriniz:\n");
	scanf(" %d",&secim);
	printf("Sekil icin bir karakter giriniz:\n");
	scanf(" %c",&sekil);
	if(sekil=='k'||sekil=='K')
	{
		printf("Karenin alaný icin 1, cevresi icin 1 disindaki herhangi bir tam sayi giriniz:\n");
		scanf("%d",&secim);
		if(secim==1)
		{
			printf("Karenin alani= %.99lf\n",pow(k2,2));
		}
		else	
		{
			printf("Karenin cevresi= %.25lf\n",2*(k1+k2));
		}
	}
	if(sekil=='d'||sekil=='D')
	{
		printf("Dikdortgenin alani icin 1, cevresi icin 1 disindaki herhangi bir tamsayi giriniz:\n");
		scanf("%d",&secim);
		if(secim==1)
		{
			printf("Dikdortgenin alani= %.99lf\n",k1*k2);
		}
		else
		{
			printf("Dikdortgenin cevresi= %.25lf\n");
		}
	}
}

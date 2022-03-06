#include<stdio.h>
int f(int *b);
int main()
{//Girilen b tamsayýsýnýn faktöriyelini bulan program yazmaya çalýþtým. Bunu pointer, fonksiyon ve döngü kullanarak yazmaya çalýþtým.
	int b,s;
	printf("1 TAMSAYI GIR:");
	scanf("%d",&b);
	f(&b);
	printf("Girdiginiz sayinin faktoriyeli=%d",s);
	return 0;
}

int f(int *b)
{
	int a,s=1;
	if(*b-1>0)
	{
		for(a=*b-1;a>0;a--)
		{	do{
			s*=a;}while(*b>1);
		}
	}
	else
		printf("Girdiginiz sayi fazlasiyla kucuk, lutfen 1'den buyuk sayi giriniz:");
	return(s);
}

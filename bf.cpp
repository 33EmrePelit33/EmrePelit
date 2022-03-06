#include<stdio.h>
void saychar(char g,int *toplamkrk,int *buyharf,int *kucharf,int *noktalama,int *sayi);
int main()
{
	int toplamkrk=0,buyharf=0,kucharf=0,noktalama=0,sayi=0;
	char g;
	do{
		printf("Bir karakter gir:");
		scanf("%c",&g);
	}while(g!='.');
	saychar(g,&toplamkrk,&buyharf,&kucharf,&noktalama,&sayi);
	printf("Toplam karakter sayisi=%d\nBuyuk harf sayisi=%d\nKucuk harf sayisi=%d\nNoktalama isareti sayisi=%d\nSayi adedi=%d\n",toplamkrk,buyharf,kucharf,noktalama,sayi);
	return(0);
}
void saychar(char g,int *toplamkrk=0,int *buyharf=0,int *kucharf=0,int *noktalama=0,int *sayi=0)
{
	
	if(33<=(int)g<=47||58<=(int)g<=64||91<=(int)g<=96||123<=(int)g<=126)
	{
		noktalama++;
		toplamkrk++;
	}
	if(65<=(int)'g'<=90)
	{
		buyharf++;
		toplamkrk++;
	}
	if(48<=(int)'g'<=57)
	{
		sayi++;
		toplamkrk++;
	}
	if(97<=(int)'g'<=122)
	{
		kucharf++;
		toplamkrk++;
	}
}

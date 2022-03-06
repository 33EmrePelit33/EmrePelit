#include <stdio.h>
int main(void)
{
	int e,k;
	int s1[e][k];
	int i,j;
	double puan,eort,kort,toplam,genelort;
	printf("Erkek ogrenci sayisini giriniz:",e);
	scanf("%d",&e);
	printf("Kiz ogrenci sayisini giriniz:",k);
	scanf("%d",&k);
	for(i=0;i<e;i++) {
	    printf("%d.ogrencinin notunu giriniz:",i+1);
		scanf("%d",&puan);
		toplam+=puan;}
	eort=toplam/e; 
	printf("Erkeklerin ortalamasi=%f",eort);
	for(j=0;j<k;j++) {
		printf("\n%d.ogrencinin notunu giriniz:",j+1);
		scanf("%d",&puan);
		toplam+=puan;}
	kort=toplam/k;  
	printf("Kizlarin ortalamasi=%f",kort);
	return 0;
}

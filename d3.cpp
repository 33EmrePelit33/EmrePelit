#include<stdio.h>
int main()
{//En fazla 100 kişinin olduğu bir sınıftaki öğrencilerin numarası ve notunun girildiği bir programda sınıfın maksimum ve minimum değerlerini bulan program
//Benim bu koddaki sorunum maksimum notlu kişinin numarası ve minimum notlu kişinin numarasını ayrı ayrı bulup yazan programı üretememiş olmam.
	int i,j,l,m,k,b,ma,mi,n,miN,maN,a[100],d[100];
	printf("Sinif mevcudunu giriniz:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d. ogrencinin numarasini(0-1000)giriniz:",i+1);
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		printf("%d.ogrencinin notunu(0-100)giriniz:",j+1);
		scanf("%d",&d[j]);
	}
	k=a[0];
	mi=d[0];
	miN=a[0];
	for(i=0;i<n;i++){
		for(j=0,l=0;j<n-i,l<n-i;j++,l++){
			if(a[j]<k&&d[j]<mi)
			{
				k=a[j];
				mi=d[j];
				miN=a[l];
			}}}				
	b=a[0];
	ma=d[0];
	maN=a[0];
	for(i=0;i<n;i++){
		for(j=0,m=0;j<n-i,m<n-i;j++,m++){
			if(a[j]>b&&d[j]>ma)
			{
				b=a[j];
				ma=d[j];
				maN=a[m];
			}}}
	ma=d[0];
	for(i=0;i<n;i++)
		for(j=0;j<n-i;j++)
			if(d[j]>ma)
				ma=d[j];
	mi=d[0];
	for(i=0;i<n;i++)
		for(j=0;j<n-i;j++)
			if(d[j]<mi)
				mi=d[j];
	printf("%d\t%d",a[n],d[n]);
	printf("En kucuk not ve numarasi:%d\t%d\n",mi,miN);
	printf("En kucuk numara:%d\n",k);
	printf("En buyuk not ve numarasi:%d\t%d\n",ma,maN);
	printf("En buyuk numara:%d",b);
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int c,j,i,a=1024,b,k[4][3];
	printf("Baslangic degerini gir(2 tane):");
	scanf("%d%d",&j,&b);
	printf("c degerini giriniz:");
	scanf("%d",&c);
	for(i=0;i<c;i++)
	{
		j*=3;
		b=pow(b,2);
		a/=2;
		printf("2 boyutlu matris={{%d}{%d}{%d}}\n",j,b,a);}
	return 0;
}

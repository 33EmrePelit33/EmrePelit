#include<stdio.h>
int main(void)
{
	int n,i,pos=0,sifir=0,neg=0;
	double sayi;
	printf("Kac reel sayi gireceksiniz:");
	scanf("%d",&i);
	for(n=1;n<=i;n++)
	{
		printf("%d. sayi:",n);
		scanf("%lf",&sayi);
		if(sayi>0)
			pos++;
		else if(sayi<0)
				neg++;
			else
					sifir++;
	}
	printf("P=%d\nS=%d\nN=%d",pos,sifir,neg);
	return 0;
}

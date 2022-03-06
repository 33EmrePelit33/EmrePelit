
#include<stdio.h>
int main(void)
{
	int p=0,neg=0,s=0,n,sayi,i;
	printf("Kac tane tam sayi gireceksiniz:");
	scanf("%d", &n);
	for(i=1;i<n; i=i+1);
	{
		printf("%d. tam sayi= ",i);	
		scanf("%d",&sayi);
					
		if(sayi>0)	
			p++;
		else if(sayi<0) 
				neg++;
			else 
					s++;
	}
	printf("Pozitif reel sayi adedi=%d",p);
	printf("\nNegatif reel ssayi=%d",neg);
	printf("\nSifir sayisi adedi=%d",s);
	return(0);
}

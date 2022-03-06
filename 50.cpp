#include<stdio.h> 
char tip();
int main()
{
	printf("Sayinin tipi: %c",tip());
	return 0;
}
char tip()
{
	double s;
	printf("Bir reel sayi giriniz:");
	scanf("%lf",&s);
	if(s<0)
		return('n');
	else if(s>0)
			return('p');
		else
				return('s');	
}

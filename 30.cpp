#include<stdio.h>
int main(void)
{
	double k1,k2,cevre,alan;
	char ch;
	printf("2 kenar giriniz:");
	scanf("%lf%lf",&k1,&k2);
	printf("Alan icin A veya a, cevre icin C veya c giriniz:");
	scanf(" %c",&ch);
	if(ch=='a'||ch=='A')	
	{
		alan=k1*k2;
		printf("alan=%lf",alan);	
	}
	else if(ch=='c'||ch=='C')	
	{
		cevre=2*(k1+k2);
		printf("Cevre=%lf",cevre);
	}
	else 
		printf("ch degeri A, a, C, c den biri olmalý.");
	return 0;
}

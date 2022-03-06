#include<stdio.h>
int main(void)
{
	float n,toplam;
	int i=1;
	toplam=0.0;
	n=0.0;
	while(i<=6)
	{
		printf("%d.sayiyi giriniz:",i);
		scanf("%f",&n);
		if(n>0)	
			toplam+=n;
		i+=1;
	}
	printf("%f",toplam);
	return 0;
}

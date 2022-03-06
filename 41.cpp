#include<stdio.h>
#include<math.h>
#define pi 3.14
int main(void)
{
	double a,r,h;
	int secim;
	printf("a,r ve h degerlerini giriniz:");
	scanf("%lf%lf%lf",&a,&r,&h);
	do
	{
		printf("Secim menusu:\nKare icin 1\nKup icin 2\nDaire icin 3\nSilindir icin 1,2,3 disindaki bir deger giriniz:");
		scanf("%d",&secim);
		if(secim==1)
			printf("Karenin alani=%lf",pow(a,2));
		else if(secim==2)
				printf("Kubun alani=%lf",6*pow(a,2));
			else if(secim==3)
					printf("Dairenin alani=%lf",pi*pow(r,2));
				else
						printf("Silindirin alani=%lf",2*pi*pow(r,2)+2*pi*r*h);
	}while(secim=1);
	return 0;
}

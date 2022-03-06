#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	int *apt,*bpt;
	double c,s;
	double *spt,*cpt;
	apt=&a;
	bpt=&b;
	cpt=&c;
	spt=&s;
	printf("a ve b yerine deger giriniz:");
	scanf("%d%d",&a,&b);
	c=pow(a*b,5.2);
	s=pow(c,a*b);
	printf("c degeri=%.25lf\ns degeri=%.15lf\n",*cpt,*spt);
	return(0);
}

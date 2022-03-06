#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{//Bu program karakter dizilerinin uzunluklarýný ayrý deðiþkenlerde tutup en son bu deðiþkenlerle iþlemler yapmak üzere tasarlanmýþtýr.
	char d[50],e[50],f[50];
	int a,b,c;
	int *apt,*bpt,*cpt;
	double x,y,z,t;
	apt=&a;
	bpt=&b;
	cpt=&c;
	printf("1 dizgi giriniz:");
	gets(d);
	printf("1 dizgi giriniz:");
	gets(e);
	printf("1 dizgi giriniz:");
	gets(f);
	a=strlen(d);
	b=strlen(e);
	c=strlen(f);
	x=*apt*(*bpt);
	y=x/(*bpt)*(*cpt);
	z=y*(*cpt);
	t=x*y*z;
	printf("a degeri=%d\nb degeri=%d\nc degeri=%d\n",*apt,*bpt,*cpt);
	printf("x degeri=%.9lf\ny degeri=%.10lf\nz degeri=%.11lf\nt degeri=%.12lf\n",x,y,z,t);
	return(0);
}

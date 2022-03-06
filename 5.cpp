#include <stdio.h>
#include <math.h>
#define Pi 3.1415
int main(void)
{
	double r,cevre,alan,hacim;
	int h;
	printf("yaricapi giriniz:");
	scanf("%lf",&r);
	printf("yuksekligi giriniz:");
	scanf("%d",&h);
	cevre=2*Pi*r;
	alan=Pi*pow(r,2);
	hacim=Pi*pow(r,2)*h;
	printf("%lf\n%lf\n%lf",cevre,alan,hacim);
	return 0;
}

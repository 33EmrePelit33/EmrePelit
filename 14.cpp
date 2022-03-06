#include <stdio.h>
int main(void)
{
	double a[]={1.1,2.3,3.5,5.7,9.9};
	double *p;
	p=a;
	printf("%f\n", *a);
	printf("%f\n", a[0]);
	printf("%f\n", *p);
	printf("%lf\n", p[0]);
	printf("%lf\n", p[1]);
	printf("%lf\n", a[1]);
	return(0);
}

#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	double a[29];
	for(i=65;i<94;i++){
		a[i]=4*pow(i,i);
		printf("a[%d]=%lf\n",i,a[i]);}
	return 0;
}

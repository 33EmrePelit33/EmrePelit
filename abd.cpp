#include<stdio.h>
int main(void)
{
	int m,i;
	float a,b,k=0,n=0;
	printf("a=\n");
	scanf("%f",&a);
	printf("b=\n");
	scanf("%f",&b);
	printf("m=\n");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		a*=2.5;
		k+=a;
		b*=3.2;
		n+=b;
		printf("ali={%f %f}\n",a,b);
	}
	printf("a'lar toplami=%f\nb'ler toplami=%f\n",k,n);
	return 0;
}

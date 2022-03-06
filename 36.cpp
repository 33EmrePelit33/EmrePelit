#include<stdio.h>
#include<math.h>
int main(void)
{
	double s1,s2,e;
	printf("2 ondalikli sayi giriniz:");
	scanf("%lf%lf",&s1,&s2);
	for(e=0;s1<=s2;s1+=5)
	{
		e=pow(s1,s2);
		printf("%lf\n",e);
	}
	return 0;
}

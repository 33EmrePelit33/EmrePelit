#include<stdio.h>
int main()
{
	int n,i,j;
	double mat[n][2],top[1][2],a,f,b=0,c=0;
	printf("a ve f reel sayilari=");
	scanf("%lf%lf",&a,&f);
	printf("n tamsayisi=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a*=7.3;
			b+=a;
			f*=9.6;
			c+=f;
			printf("\nToplam matrisi={%f %f}\n",b,c);
		}
		printf("n*n boyutundaki matris={%f %f}\n",a,f);
	}
	printf("\nToplam matrisi={%f %f}\n",b,c);
	return 0;
}

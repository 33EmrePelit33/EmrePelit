#include<stdio.h>
#include<math.h>
int main()
{
	int n,c,d;
	float k[n][n];
	printf("n sayisini gir:");
	scanf("%d",&n);
	printf("c sayisini gir:");
	scanf("%d",&c);
	do{
		for(c=1;c<=n;c+=2)
		{
			k[c][c]=pow(c,3)*sqrt(c);
			printf("k[%d][%d]=%.20f\n",c,c,k[c][c]);}
	}while(n>=c);
	return 0;
}

#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{//Tan�mlama sat�r�nda int* x,y,z yaz�l�rsa bu yaz�lan �al��maz.
	int *px,*py,*pz;
	int x,y,z;
	printf("x,y ve z yerine tamsayi degerler giriniz:");
	scanf("%d%d%d",&x,&y,&z);
	px=&x;
	py=&y;
	pz=&z;
	*px=y*z;
	*py=x*z;
	*pz=x*y;
	printf("\nx=%d",x);
	printf("\ny=%d",y);
	printf("\nz=%d\n",z);
	x=pow(*py,*pz);
	y=pow(x,*pz);
	z=pow(x*y,*px*(*py));
	printf("\nx=%d",x);
	printf("\ny=%d",y);
	printf("\nz=%d",z);
	return(0);
}

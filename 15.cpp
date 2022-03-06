#include <stdio.h>
void f1(int b[],int n);
int main(void)
{
	int i,a[]={1,2,3};
	f1(a,3);
	printf("\nmain fonksiyonu");
	for(i=0;i<3;i++)
		printf("%d",a[i]);
	return(0);
}
void f1(int b[], int n)
{
	int i;
	printf("f1 fonksiyonu");
	for(i=0;i<n;++i)
	{
		printf("%d", b[i]);
		b[i]=8;
	}
}

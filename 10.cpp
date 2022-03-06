#include <stdio.h>
void fon(int a)
{
	a=8;
	printf("Fonksiyon icinde %d\n",a);
}
int main(void)
{
	int s=1;
	printf("fon cagirilmadan once %d\n",s);
	fon(s);
	printf("fon cagirildiktan sonra %d",s);
}

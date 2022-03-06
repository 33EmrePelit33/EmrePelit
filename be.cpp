#include<stdio.h>
void fon(int *p);
int main()
{
	int p;
	printf("Para degerini gir:");
	scanf("%d",&p);
	fon(&p);
	return 0;
}
void fon(int *p)
{	
	int yz,e,yr,o,b;
	int k;
	yz=*p/100;
	e=(*p-100*yz)/50;
	yr=(*p-100*yz-50*e)/20;
	o=(*p-100*yz-50*e-20*yr)/10;
	b=(*p-100*yz-50*e-20*yr-10*o)/5;
	k=*p-100*yz-50*e-20*yr-10*o-5*b;
	printf("Para toplamda %d tane yuzluk, %d tane ellilik, %d tane yirmilik, %d tane onluk, %d tane beslik ve %d kadar parayi icermektedir.",yz,e,yr,o,b,k);	
}

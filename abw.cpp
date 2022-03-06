#include<stdio.h>
int main()
{
	int c=10,d=9;
	int *cpt=&c,*dpt=&d;
	cpt=dpt;
	*dpt=7;
	printf("%d\n%d",c,d);
	return(0);
}

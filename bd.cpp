#include<stdio.h>
int main()
{
	float y;
	printf("y yerine bir reel sayi degeri gir:\n");
	scanf("%f",&y);
	float *yptr=&y;
	printf("y bellek hucresinin gosterdigi deger %f\t",*yptr);
	printf("y bellek hucresinin adresi %p\n",yptr);
	return(0);
}

#include<stdio.h>
int main()
{//x+x+y+y x*y
	int x,y;
	printf("x ve y tamsayilarini giriniz:");
	scanf(" %d%d",&x,&y);
	printf("Dikdortgenin alani = %d,dikdortgenin cevresi = %d",x*y,2*(x+y));
	return 0;
}

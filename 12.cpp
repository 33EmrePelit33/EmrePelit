#include <stdio.h>
int main(void)
{
	int *px,*py;
	int x=3,y=4;
	px=&x;
	py=&y;
	*py+=1;
	*px=*py;
	printf("Yeni x ve y degerleri:%d   %d",x,y);
}


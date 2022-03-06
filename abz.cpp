#include<stdio.h>
int main()
{
	int x=98,y=102;
	int *px,*py;
	px=&x;
	py=&y;
	px=py;//Bu satýrla beraber iki gösterge de hem x hem y deðerlerini göstermeye baþladý.
	*py=212;//Buradaki *py yerine *px de desek hiçbir þey deðiþmezdi.
	printf("x=%d\ny=%d\n",*px,*py);
	return(0);
}

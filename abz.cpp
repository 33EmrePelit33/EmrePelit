#include<stdio.h>
int main()
{
	int x=98,y=102;
	int *px,*py;
	px=&x;
	py=&y;
	px=py;//Bu sat�rla beraber iki g�sterge de hem x hem y de�erlerini g�stermeye ba�lad�.
	*py=212;//Buradaki *py yerine *px de desek hi�bir �ey de�i�mezdi.
	printf("x=%d\ny=%d\n",*px,*py);
	return(0);
}

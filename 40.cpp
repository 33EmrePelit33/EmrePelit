#include<stdio.h>
int main()
{
	float x,y;
	for(x=0,y=0; x>-10,y<5; x=x-1.5,y=y+2.3)
		printf("%3f %2f\n",x,y);
	return 0;
}

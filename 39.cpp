#include<stdio.h>
int main()
{
	int x,y,z;
	for(x=0,y=0,z=0;x<15,y>-20,z>-10;x+=2,y-=5,z-=1)
		printf("%5d %5d %5d\n",x,y,z);
	return 0;
}

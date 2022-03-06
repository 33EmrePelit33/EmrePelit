#include <stdio.h>
int main()
{
	int a=98,b=102;
	int *cp;
	cp=&a;
	b=*cp;
	printf("\na degeri=%d\nb degeri=%d\n",a,b);
	return(0);
}

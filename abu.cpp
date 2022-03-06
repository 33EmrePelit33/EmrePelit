#include<stdio.h>
int main()
{
	int x,y=4;
	int *apt=&y,*bpt=&x;
	x=y;
	*bpt=x;
	printf("%d",*bpt);
	return(0);
}

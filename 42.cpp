#include<stdio.h>
int main(void)
{
	int x,y;
	for(x=1;x<10;x++)
		{
			for(y=x;y>0;y--)
				printf("%d",y);
			printf("\n");
		}
	return 0;
}

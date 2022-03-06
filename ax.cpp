#include<stdio.h>
#include<math.h>
int main(void)
{
	int a;
	float b,c[15];
	for(a=5;a<=15;a++)
	{
		for(b=5.3;b>-25.9;b-=2.5){
			c[a]=pow(b,3*a/2);
		}
		printf("%f\n",c[a]);
	}
	return 0;
}

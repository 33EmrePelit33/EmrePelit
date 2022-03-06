#include<stdio.h>
#include<math.h>
#define e 2.79
int main(void)
{
	float g,y;
	printf("y'yi giriniz:");
	scanf("%f",&y);
	if(y>10)
	{
		g=pow(y,5)+sqrt(y+sqrt(3));
		printf("g(y)=%.7f",g);
	}
	else if(y>=0&&y<=10)
	{
		g=sqrt(pow(y,2)+1659487643151);
		printf("g(y)=%.30f",g);
	}
	else
	{
		g=sqrt(pow(e,y)+169);
		printf("g(y)=%.9f",g);
	}
	return 0;
}

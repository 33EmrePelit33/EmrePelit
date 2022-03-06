#include<stdio.h>
#include<math.h>
int main(void)
{
	float x,y,f;
	printf("x ve y'yi giriniz:\n");
	scanf(" %f%f",&x,&y);
	if(x>0)
	{
		f=pow(x,2)+4*y+3;
		printf("f(x,y)= %.25f",f);
	}
	else
	{
		f=pow(x,3)+3*y+pow((5*x+3*y),5);
		printf("f(x,y)= %.50f",f);
	}
	return 0;
}

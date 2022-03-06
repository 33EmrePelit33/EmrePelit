#include<stdio.h>
int main(void)
{
	int i,toplam;
	toplam=0;
	i=1;
	if(i<=100)
	{
		toplam+=i;
		i+=1;
	}
	else
		printf("Toplam=%d",toplam);
	return 0;		
}


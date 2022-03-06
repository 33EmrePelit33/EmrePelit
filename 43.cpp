#include<stdio.h>
int main(void)
{
	int n;
	int num,bayrak,i;
	printf("Bir n pozitif tam sayisi giriniz:");
	scanf("%d",&n);
	printf("1-%d arasindaki butun asal sayilar:",n);
	printf("\n-----------\n");
	for(num=2;num<=n;num++)
	{
		bayrak=1;
		i=2;
		while((i<num)&&(bayrak==1))
		{
			if(num%i==0)
				bayrak=0;
			i++;
		}
		if(bayrak==1)
			printf("%d\n",num);
	}
	return 0;
}

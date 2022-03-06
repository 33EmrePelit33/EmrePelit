#include<stdio.h>
int main(void)
{
	int m,n,i,cift=0,tek=0;
	printf("2 sayi giriniz:");
	scanf("%d%d",&m,&n);
	if(m>n)
	{
		for(i=n;i<=m;i++)
		{
			if(i%2==0)	cift+=i;
			else tek+=i;
		}
	}
	else
	{
		for(i=m;i<=n;i++)
		{
			if(i%2==0)	cift+=i;
			else	tek+=i;	
		}
	}
	printf("Arasindaki tek sayilar toplami:%d\nArasindaki cift sayilar toplami:%d",tek,cift);
	return 0;
}

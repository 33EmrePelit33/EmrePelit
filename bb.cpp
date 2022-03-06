#include<stdio.h>
int main()
{
	int i=1,k[5],carpim=1;
	while(i<=3)
	{
		printf("1 tamsayi gir:");
		scanf("%d",&k[i]);
		i++;
	}
	for(i=1;i<=3;i++)
	{
		carpim*=k[i];
	}
	printf("Carpim sonucu=%d",carpim);
	return 0;
}

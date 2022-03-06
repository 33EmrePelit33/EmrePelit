#include<stdio.h>
int main(void)
{
	int v1,v2,f;
	double ao;
	char hn;
	printf("3 not giriniz:");
	scanf("%d%d%d",&v1,&v2,&f);
	ao=v1*0.20+v2*0.30+f*0.50;
	printf("Agirlikli ortalama=%6.2f\n",ao);
	if(90<=ao) 
		hn='A';
   	else if(85<ao) 
	   	hn='B';
		else if(75<ao) 
			hn='C';
			else if(60<ao) 
				hn='D';
				else if(45<ao) 
					hn='E';
					else if(25<ao) 
						hn='F';
						else	 
							hn='G';
	printf("Harf notu=%c",hn);	
	return 0;
}

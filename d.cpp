#include<stdio.h>
int main()
{
	char op;
	float a,b,c;
	printf("Operator gir:\n");
	scanf("%c",&op);
	printf("2 reel sayi gir:\n");
	scanf("%f%f",&a,&b);
	switch(op)
	{
		case '+':printf("%f\n",a+b);
				break;
		case '-':printf("%f\n",a-b);
				break;
		case '*':printf("%f\n",a*b);
				break;
		case '/':if(b==0)
					printf("0 bolen olarak kullanilamaz.\n");
			   else
			   {
			   		c=a/b;
			   		printf("%f\n",c);
			   	}
			   	break;
				default:printf("Yanlis karakter secimi.");
	}
	return 0;
}

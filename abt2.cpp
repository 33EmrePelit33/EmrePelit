#include<stdio.h>
#include<string.h>
int main()
{//Bir karakter dizisini harf harf tan�mlarsak program dizginin sonuna ekstradan bir '\0' karakteri atamaz ama �ift t�rnak i�ine dizginin t�m�n� tan�mlarsak program 
//sona bir '\0' karakterini kendili�inden ekler. 
	char k[7]={'m','e','r','h','a','b','a'};
	int x;
	x=strlen(k);
	printf("%d",x);
	return(0);
}

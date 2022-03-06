#include<stdio.h>
#include<string.h>
int main()
{//Bir karakter dizisini harf harf tanýmlarsak program dizginin sonuna ekstradan bir '\0' karakteri atamaz ama çift týrnak içine dizginin tümünü tanýmlarsak program 
//sona bir '\0' karakterini kendiliðinden ekler. 
	char k[7]={'m','e','r','h','a','b','a'};
	int x;
	x=strlen(k);
	printf("%d",x);
	return(0);
}

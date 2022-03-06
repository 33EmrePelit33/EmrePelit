#include<stdio.h>
#include<string.h>
int main()
{
	char user[45];
	printf("Lutfen bir karakter dizisi gir:");
	gets(user);
	printf("\n");
	printf("Girilen karakter dizisi= %s",user);
	return(0);
}

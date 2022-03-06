#include<stdio.h>
int main(void)
{
	int f,b;
	int *fp,*bp;
	fp=&f;
	bp=&b;
	printf("f ve b tamsayilarini gir:");
	scanf("%d%d",&f,&b);
	printf("f=%d\nb=%d\nfp gostergesine NULL degeri atayinca:\n",*fp,*bp);
	fp=NULL;
	printf("f=%d\nb=%d\n",*fp,*bp);
	return(0);
}

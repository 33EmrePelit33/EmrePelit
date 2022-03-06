#include <stdio.h>
int main(void)
{
	int S[99],i;
	for(i=0;i<99;i++)
		S[i+1]=(i+1)*(i+1);
	printf("S serisinin ilk ve son elemani=\n%d\n%d",S[1],S[99]);
	return 0;
}

#include <stdio.h>
#ifndef true
#define true 1
#define false 0
#endif

unsigned short impair(unsigned int);

unsigned short pair(unsigned int n)
{
	if(n==0)
		return true;
	else
		return impair(n-1);	
}

unsigned short impair(unsigned int n)
{
	if(n==0)
		return false;
	else
		return pair(n-1);	
}

int main()
{
	unsigned int n;
	
	do{
		printf("Donnez un entier potisif: ");
		scanf("%d",&n);
	}while(n<0);
	
	if(pair(n))
		printf("L'entier %d est pair\n",n);
	else
		printf("L'entier %d est impair\n",n);
	
	return 0;
}

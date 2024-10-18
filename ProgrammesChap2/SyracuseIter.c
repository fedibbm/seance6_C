#include <stdio.h>
#ifndef true
#define true	1
#endif

long int SyracuseIter(long int n)
{
	do
	{
		printf("%ld ",n);
		
		if(n == 1) return 1;
		
		if(n%2 == 0)
			n /= 2;
		else
			n = 3*n + 1;
	}while(true);
}

int main()
{
	long int n;
	
	do{
		printf("Donnez un entier positif: ");
		scanf("%ld",&n);
	}while(n == 0);
	
	printf("%ld\n",SyracuseIter(n));
	
	return 0;
}

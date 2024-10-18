#include <stdio.h>

long int Syracuse(long int n)
{
	printf("%ld ",n);
	
	if(n == 1)
		return 1;
	else
		if(n%2 == 0)
			return Syracuse(n/2);
		else
			return Syracuse(3*n+1);
}

int main()
{
	long int n;
	
	do{
		printf("Donnez un entier positif: ");
		scanf("%ld",&n);
	}while(n == 0);
	
	printf("%ld\n",Syracuse(n));

	return 0;
}

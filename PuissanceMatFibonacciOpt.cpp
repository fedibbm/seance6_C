#include <stdio.h>

void ProduitMat0111(int *a, int *b, int *c, int *d)
{
	*b = *a + *b;
	*d = *d + *c;
	*a = *b - *a;
	*c = *d - *c;
}

void CarreeMat(int *a, int *b, int *c, int *d)
{
	int aa, bb, cc, dd;
	
	aa = *a * *a + *b * *c;
	bb = *a * *b + *b * *d;
	cc = *a * *c + *d * *c;
	dd = *c * *b + *d * *d;
	*a = aa;
	*b = bb;
	*c = cc;
	*d = dd;
}

void PuissanceMatFibonacciOpt(int n, int *a, int *b, int *c, int *d)
{
	if(n==0)
	{
		*a = 1; *b = 0;
		*c = 0; *d = 1;
	}
	else
	{
		PuissanceMatFibonacciOpt(n/2,a,b,c,d);
		CarreeMat(a,b,c,d);
		if(n%2) ProduitMat0111(a,b,c,d);
	}
}

int main()
{
	int n,a,b,c,d;
	
	printf("Saisissez l'indice de terme de la suite de Fibonacci: ");
	scanf("%d",&n);
	PuissanceMatFibonacciOpt(n,&a,&b,&c,&d);
	
	printf("%d %d %d %d\n",a,b,c,d);
	
	return 0;
}

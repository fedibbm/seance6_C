#include <stdio.h>

double factterminale(long n, double f)
{
	if(n==1)
		return f;
	return factterminale(n-1,n*f);
}

double fact(long n)
{
	if(n<=1) return 1;
	return n*fact(n-1);
}

double factIter(long n)
{
	int i;
	double f;
	
	f = 1;
	
	for(i=1;i<=n;i++)
		f *= i;
	return f;
}


int main()
{
	long n;
	scanf("%d",&n);
	printf("%f",factIter(n));
	//printf("%f",factterminale(n,1));
	return 0;
}


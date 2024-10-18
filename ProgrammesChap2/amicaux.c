#include <stdio.h>
#include <math.h>

int SommeDivStrict(int n)
{
	int i, s = 1, r = sqrt(n);
	
	for(i=2; i <= r; i++)
		if(n%i == 0)
		{
			s += i;
			if(i != n/i) s += n/i;
		}
			
					
	return s;
}

int main()
{
	int k,m,n,N;
	printf("Donnez un entier maximal : ");
	scanf("%d",&N);
	
	for(n=2, k = 0; n <= N; n++)
		if(n < (m = SommeDivStrict(n)) && n == SommeDivStrict(m))
			printf("%d : (%d,%d)\n",++k,n,m);

	return 0;
}

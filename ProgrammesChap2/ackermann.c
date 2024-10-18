#include <stdio.h>

long int ackermann(long int n, long int m)
{
	printf("%d %d\n",n,m);
	if(n == 0) return m+1;
	if(m == 0) return ackermann(n-1,1);
	return ackermann(n-1,ackermann(n,m-1));
}

int main()
{
	long int n,m;
	
	printf("Saisissez n et m : ");
	scanf("%d %d",&n,&m);
	printf("\n %ld\n",ackermann(n,m));
	
	return 0;
}

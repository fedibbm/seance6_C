#include <stdio.h>

void Hanoi(int n, char A, char B, char C)
{
	if(n > 0)
	{
		Hanoi(n-1,A,C,B);
		printf("D%cplacez le disque de %c vers %c\n",130,A,C);
		Hanoi(n-1,B,A,C);
	}
}

int main()
{
	int n;
	
	printf("Saisissez le nombre de disque: ");
	scanf("%d",&n);
	Hanoi(n,'a','b','c');
	
	return 0;
}

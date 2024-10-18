#include <stdio.h>
void Swap1(int a, int b)
{
	int tmp;
	
	tmp = a;
	a = b;
	b = tmp;	
}

void Swap2(int* adra, int* adrb)
{
	int tmp;
	
	tmp = *adra;
	*adra = *adrb;
	*adrb = tmp;	
}


int main()
{
	int a,b;
	
	printf("Saisissez deux entiers: ");
	scanf("%d %d",&a,&b);
	printf("%p %p\n",&a,&b);
	
//	Swap1(a,b); 	// Passage de paramètres par valeur
	
//	printf("%d %d\n",a,b);
	
	Swap2(a,b);// Passage de paramètres par adresse
	
	printf("%d %d\n",a,b);	
	
	return 0;
}

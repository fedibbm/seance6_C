#include <stdio.h>

int a,b; // D�claration de deux variables globales

void Swap(int *adra, int *adrb)
{	
	// D�claeation d'une variable locale b 
	// qui masque la variable globale b
	int b; 
	
	b = *adra;
	*adra = *adrb;
	*adrb = b;	
	x = 3;		// sera signal�e comme non d�clar�e par le compilateur, bien d�clar�� dans main()
}

int main()
{	
    int x;	
	printf("Saisissez deux entiers: ");
	scanf("%d %d",&a,&b);
	Swap(&a,&b); // Passage par adresse
	printf("%d %d",a,b);
	
	return 0;
}

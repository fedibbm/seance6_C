#include <stdio.h>

int a,b; // Déclaration de deux variables globales

void Swap(int *adra, int *adrb)
{	
	// Déclaeation d'une variable locale b 
	// qui masque la variable globale b
	int b; 
	
	b = *adra;
	*adra = *adrb;
	*adrb = b;	
	x = 3;		// sera signalée comme non déclarée par le compilateur, bien déclaréé dans main()
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

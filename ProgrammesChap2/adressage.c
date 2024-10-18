#include <stdio.h>

int main()
{
	int var, *ptr;
	
	var = 2019;
	ptr = &var;
	
	printf("%d %d %p %p\n",var,*ptr,&var,ptr);
	var -= 2;
	*ptr += 3; 
	printf("%d %d %d %p\n",var,*ptr,*&var,&*ptr);
	// Ce dernier affichage produit: 2020 2020 2020 et l'adresse de la variable var
	return 0;
}

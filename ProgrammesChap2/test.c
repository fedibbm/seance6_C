#include <stdio.h>
void Saisie(int *tab, int n)    
{
	int i;
	
	tab = &n;
	
	for(i=0;i<n;i++)
		scanf("%d",&tab[i]);
}

void Afficher(int *tab, int n)
{
	int i;
	
	for(i=0;i<n;i++)
		printf("%d ",tab[i]);
}


int main()
{
	int n, tab[64];


	scanf("%d",&n);
	
	printf("%p",tab);
	Saisie(tab,n);
	
	Afficher(tab,n);
	return 0;
}

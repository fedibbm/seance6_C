#include <stdio.h>

int m=3;

void SaisirTab(int tab[64], int n)
{
	int i;
	
	for(i=0;i<n;i++)
	  scanf("%d",&tab[i]);
}

void AfficherTab(int tab[64], int n)
{
	int i;
	 
	for(i=0;i<n;i++)
	  printf("%d ",tab[i]);
}


int main()
{
	int m=4,n, tab[64];
	

	printf("%d n?",m);
	scanf("%d",&n);
	
	printf("%p\n",tab);
	
	SaisirTab(tab,n);
	AfficherTab(tab,n);
	
	return 0;
}

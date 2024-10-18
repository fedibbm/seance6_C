#include <stdio.h>
#define MAXTAIL 1024

void InitPile(int *tailPile)
{
	*tailPile = 0;
}

int PileVide(int tailPile)
{
	return (tailPile==0);
}

int PilePleine(int tailPile)
{
	return (tailPile==1024);
}

void Empiler(int pile[], int *tailPile, int elt)
{
	pile[(*tailPile)++] = elt;
}

int Depiler(int pile[], int *tailPile)
{
	return pile[--(*tailPile)];
}
int main()
{
	int tailPile, pile[MAXTAIL], elt;
	
	InitPile(&tailPile);
	
	while(1)
	{
		scanf("%d",&elt);
		
		if(elt==0) break;
		
		if(elt%2==0 && ! PilePleine(tailPile))
			Empiler(pile,&tailPile,elt);
			
		if(elt%2==1 && ! PileVide(tailPile))
			printf("%d\n",Depiler(pile,&tailPile));		 
	}
	return 0;
}

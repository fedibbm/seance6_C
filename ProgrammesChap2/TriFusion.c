#include <stdio.h>
#define MAXTAIL 128

void SaisieTableau(int tab[], int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("Donnez l'%cl%cment %d: ",130,130,i);
		scanf("%d",&tab[i]);
	}
}

void AfficheTableau(int tab[], int n)
{
	int i;
	
	for(i=0;i<n;i++)
		printf("%d ",tab[i]);
}


void Fusion(int tab[], int aux[], int debG, int finG, int debD, int finD)
{
	int i,j,k;
	
	i = debG;
	j = debD;
	k = debG;
				
	while(i <= finG && j <= finD)	
		if(tab[i] <= tab[j])
			aux[k++] = tab[i++];
		else
			aux[k++] = tab[j++];
	
	while(i <= finG)	
		aux[k++] = tab[i++];
	
	while(j <= finD)	
		aux[k++] = tab[j++];
	
	for(i=debG;i<=finD;i++)
		tab[i] = aux[i];	
}

void TriFusion(int tab[], int aux[], int deb, int fin)
{
	int m;
	
	if(deb < fin)
	{
		m = (deb + fin) / 2;
		TriFusion(tab,aux,deb,m);
		TriFusion(tab,aux,m+1,fin);
		Fusion(tab,aux,deb,m,m+1,fin);
	}
}


int main()
{
	int n, tab[MAXTAIL], aux[MAXTAIL];
	
	do{
		printf("Donnez le nombre d'%cl%cment %c trier: ",130,130,133);
		scanf("%d",&n);
	}while(n > MAXTAIL);
    
	SaisieTableau(tab,n);
	TriFusion(tab,aux,0,n-1);
	AfficheTableau(tab,n);
	return 0;
}

#include <stdio.h>

void VerifDate(int data, int min, int max, char message[])
{	
	if(data < min || data > max)
		printf("%s\n",message);
}

int main()
{
	char message[64];
	int jour,mois,annee;
	
	printf("Donnez le jour, le mois et l'année sous-forme jj mm aaaa: ");
	scanf("%d %d %d",&jour,&mois,&annee);
	
	// afin d'afficher les accents correctement, on utilise
	// la fonction sprintf pour imprimer le 'é' dans la 
	// chaine message à l'aide de son code ASCII (130)
	
	sprintf(message,"jour %crron%c",130,130);	
	VerifDate(jour,1,31,message);
	sprintf(message,"mois %crron%c",130,130);	
	VerifDate(mois,1,12,message);
	sprintf(message,"ann%ce %crron%ce",130,130,130);
	VerifDate(annee,1900,2020,message);
	return 0;
}

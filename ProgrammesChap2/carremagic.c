#include <stdio.h>

short int magic(short int a, short int b, short int c)
{
	return (a+b+c == 15);
}

int main()
{
	short int i,j,T[3][3];
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			printf("T[%d][%d] : ",i,j);			
			scanf("%d",&T[i][j]);
		}
		
	for(i=0;i<3;i++)
		if(!magic(T[i][0],T[i][1],T[i][2]) || !magic(T[0][i],T[1][i],T[2][i]))	
		{
			printf("Le carre n''est pas magic\n");
			return 0;
		}
	if(!magic(T[0][0],T[1][1],T[2][2]) || !magic(T[0][2],T[1][1],T[2][0]))	
		{
			printf("Le carre n''est pas magic\n");
			return 0;
		}
		
	printf("Le carre est magic\n");
	
	return 0;
}

#include <stdio.h>
#include <math.h>
#define pi		M_PI
#define epsilon 1E-6

double ProduitScalaire(double a,double b,double c,double x,double y,double z)
{
	return a*x + b*y + c*z;	
}

int main()
{
	double a,b,c,x,y,z,ps,n1,n2,angle;
	
	printf("Saisir les trois composantes du 1er vecteur: ");
	scanf("%lf %lf %lf",&a,&b,&c);
	printf("Saisir les trois composantes du 2eme vecteur: ");
	scanf("%lf %lf %lf",&x,&y,&z);	
	
	n1 =  sqrt(ProduitScalaire(a,b,c,a,b,c));
	n2 =  sqrt(ProduitScalaire(x,y,z,x,y,z));
	
	if(n1 < epsilon || n2 < epsilon)
		printf("Les deux vecteurs sont colinéaires\n");
	else
	{
		ps = ProduitScalaire(a,b,c,x,y,z);
		angle = acos(ps/(n1*n2));
	
		if(angle < epsilon || angle > pi-epsilon)
			printf("Les deux vecteurs sont colinéaires\n");
		else
			printf("Les deux vecteurs ne sont pas colinéaires\n");
	}
	
	return 0;
}

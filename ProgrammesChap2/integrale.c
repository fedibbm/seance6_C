#include <stdio.h>
#include <math.h>
#define pi	M_PI

double IntegraleRectangle(double f(double), double xMin,double xMax,int n)
{
	int i;
	double dx = (xMax - xMin)/n, x = xMin + 0.5 * dx, som = 0.0;
	
	for(i=0;i<n;i++, x+=dx)
		som += f(x); 
	return dx*som;
}

double inverse(double x)
{
	return 1/x;
}

int main()
{
	printf("%lf\n",IntegraleRectangle(sqrt,0,1,100));	
	printf("%lf\n",IntegraleRectangle(inverse,1,2,100));
	printf("%lf\n",IntegraleRectangle(sin,0,pi/2,100));	
	printf("%lf\n",IntegraleRectangle(cos,0,pi/2,100));
	return 0;
}

#include <stdio.h>
int main()
{
	long clock;
    //si tu veux r�cup�rer la date syst�me
	time(&clock);
    printf("%s\n",ctime(&clock));
	return 0;
}

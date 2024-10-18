#include <stdio.h>
int main()
{
	long clock;
    //si tu veux récupérer la date système
	time(&clock);
    printf("%s\n",ctime(&clock));
	return 0;
}

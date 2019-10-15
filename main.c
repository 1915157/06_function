#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int i;
	int max = 45;
	
	srand( (unsigned) time(NULL));
	for (i=0; i<6; i++)
		printf("%d ", 1+rand()%max);
		
		return 0;
}


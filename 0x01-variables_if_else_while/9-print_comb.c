#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int i;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	for(i = 0;i <= 9;i++)
	{
		if (i == 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);}

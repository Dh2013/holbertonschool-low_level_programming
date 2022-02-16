#include "main.h"
#include<string.h>
/**
 * print_rev - prints a string, in reverse
 *@s : pointer
 *@i : integer
 *@l : integer
 */
void print_rev(char *s)
{
        int i;
	int L;

	L = strlen(s) - 1;
        for(i=0; i <= L; L--)
        {
		_putchar(s[L]);
        }
	_putchar('\n');
}

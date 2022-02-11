#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character.
 * @c: the character to cheack
 * Return: 1 if c is uppercase , 0 otherwise
 */
int _isupper(int c)
{
	int i;

	for (i = 32; i <= 126; i++)
	{
		if (c >= 65 && c <= 90)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (1);
}


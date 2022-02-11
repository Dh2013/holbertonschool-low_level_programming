#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character.
 * @c: the character to cheack
 * Return: 1 if c is uppercase , 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (1);
}


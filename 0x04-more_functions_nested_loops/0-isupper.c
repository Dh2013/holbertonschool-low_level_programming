#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character.
 * @c: the character to cheack
 * Return: 1 if c is uppercase , 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (1);
}


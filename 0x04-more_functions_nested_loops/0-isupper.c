#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character.
 * @c: the character to cheack
 * Return: 1 if c is uppercase , 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 'A' && c <= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: this character to be check
 * Return: Returns 1 if c is a letter, lowercase
 * or uppercase otherwise 0
 */
int _isalpha(char c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))

		return (1);
	else
		return (0);
}


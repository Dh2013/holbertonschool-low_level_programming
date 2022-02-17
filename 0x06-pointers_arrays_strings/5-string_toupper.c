#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters
 * @s : pointer
 * Return: s pointer
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}

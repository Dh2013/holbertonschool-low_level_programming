#include "main.h"
/**
 * print_sign - write sign and integer
 * @n: integer check the sign
 *Return: 1 if the integer positive -1 if the integer negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');

		return (1);
	}

	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}


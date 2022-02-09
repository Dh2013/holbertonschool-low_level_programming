#include "main.h"
/**
 * print_alphabet - writes alpahbets and prints a new line
 * Return: On success void.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ch++)

		_putchar(ch);

	_putchar('\n');
}

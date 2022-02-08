#include "main.h"

/**
 * main - check the code
 *Write a function that prints the alphabet, 
 *in lowercase, 
 *followed by a new line.
 * Return: nothing.
 */

void print_alphabet(void)
{ 	
	char ch;
	
	for(ch='a';ch <='z';ch++)
	_putchar(ch);
	_putchar('\n');
}

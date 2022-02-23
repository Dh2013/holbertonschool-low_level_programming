#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	{
   if(*s!='\0')
   {   
     reverse(s+1);
   }
   printf("%c",*s);
}  

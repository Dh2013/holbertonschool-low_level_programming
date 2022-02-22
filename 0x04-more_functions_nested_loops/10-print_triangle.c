#include "main.h"
void print_triangle(int size)
{ 
	int i,j;
         	
	for(i = 1; i <= size ; i++)
	{ 
		for (j = 0 ; j < size; j++)
		{
			_putchar(' ');
     			for (j = 1; j<= i; j++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
}
}

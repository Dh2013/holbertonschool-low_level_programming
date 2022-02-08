#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - Wirite a function that prints all natural numbers from n..
 * @n: parameter
 * Return: 0
 */
void print_to_98(int n)
{
int i = 0;



if (n < 98)
{
for (i = n ; i <= 98; i++)
{
if (i == 98)
{
	printf("%d", i);
break;
}
printf("%d, ", i);
}
printf("\n");
}
else if (n > 98)
{
for (i = n; i >= 98; i--)
{
	printf("%d", i);
	if (i == 98)
		break;
	printf(", ");
}
printf("\n");
}
else
	{
		printf("98\n");
}
}



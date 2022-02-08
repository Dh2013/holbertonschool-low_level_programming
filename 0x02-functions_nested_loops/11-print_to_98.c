#include "main.h"
#include<stdio.h>
/**
 * Write a function that prints all natural numbers from n to 98, followed by a new line.
 * Return: 0
 */
void print_to_98(int n)
{
int i = 0;



if(n < 98)
{
for(i = n ; i <= 98; i++)
{
if(i == 98)
{
	printf("%d", i);
        break;
}
printf("%d, ", i);
}
printf("\n");
}
else if(n > 98)
{
for(i = n; i >= 98; i--)
{
	printf("%d", i);
	if(i == 98)
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



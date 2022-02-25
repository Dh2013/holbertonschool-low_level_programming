#include "main.h"
#include<stdio.h>

/**
 * main - prints all arguments it receives
 *@argc: stands for arguments count
 *@argv: stands for argement values
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

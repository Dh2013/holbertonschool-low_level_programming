#include <stdio.h>
#include "main.h"
/**
 *main-  prints all arguments it receives
 *@argc : stands for argument count
 *@argv : stands for argument values
 *Return: 0 success
 */
int main(int  argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}

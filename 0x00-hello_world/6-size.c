#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int s;
        long long int p;
        float f;

	printf("Size of a char:"sizeof(c));
	printf("Size of an int:"sizeof(i));
	printf("Size of a long int:"sizeof(s));
        printf("Size of a long long int:"sizeof(p));
        printf("Size of a float:"sizeof(f));
	return (0);
}

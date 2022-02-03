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

	printf("Size of a char:%zubyte(s)\n",sizeof(c));
	printf("Size of an int:%zubyte(s)\n",sizeof(i));
	printf("Size of a long int:%zubyte(s)\n",sizeof(s));
        printf("Size of a long long int:%zubyte(s)\n",sizeof(p));
        printf("Size of a float:%zubyte(s)\n",sizeof(f));
	return (0);
}

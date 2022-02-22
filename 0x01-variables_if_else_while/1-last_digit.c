#include <stdlib.h>
#include <time.h>

/**
* main - enttry point
*
* Return: 0 success
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("Last digit of %d and is greater than 5", n);
}
else if (n < 6 && n != 0)
{
printf("Last digit of %d is less than 6 and not 0", n);
}
else
{
printf("Last digit of %d is 0", n);
}
printf("\n");
return (0);
}

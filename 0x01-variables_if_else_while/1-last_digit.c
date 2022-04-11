#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of a number
 *
 * Return: Always 0 .
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		n = -n;
	if (n % 10 > 5)
		printf("Last digit of %d is greater than 5", n);
	else if (n % 10 == 0)
		printf("Last digit of %d is 0", n);
	else if (n % 10 < 6 && n % 10 != 0)
		printf("Last digit of %d is less than 6 and not 0", n);
	return (0);
}

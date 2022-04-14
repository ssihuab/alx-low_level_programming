#include "main.h"

/**
 * print_most_numbers - to print all digits except 2 and 4
 *
 * Return: int
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n == 2 || n == 4)
			n++;

		_putchar('0' + n);
			n++;
	}

_putchar('\n');
}

#include "main.h"

/**
 * print_numbers - to print numbers from 0 to 9
 *
 * Return: int
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar('0' + n);
		n++;
	}
_putchar('\n');
}

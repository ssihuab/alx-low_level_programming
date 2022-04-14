#include "main.h"

/**
 *  print_line - to print line
 *
 * @n: number of underscore that used to make a line
 * Return: void
 */
void print_line(int n)
{
	int m = 0;

	if (n > 0)
	{
		while (m < n)
		{
			_putchar('_');
			m++;
		}
	}
		_putchar('\n');
}

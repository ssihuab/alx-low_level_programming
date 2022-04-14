#include "main.h"

/**
 *  more_numbers - to print nums from 0 to 14 10x
 *
 * Return: void
 */
void more_numbers(void)
{
	int n, m, l;

for (n = 0; n < 10; n++)
{
	for (m = 0; m <= 1; m++)
	{
		for (l = 0; l <= 9; l++)
		{
			if (!(m == 1 && l >= 5))
			{
				if (m)
				_putchar(m + '0');
				_putchar(l + '0');
			}
		}
	}
	_putchar('\n');
}
}

#include "main.h"

/**
 * print_rev - to print a string in reverse
 *
 * @s: this is a pointer variable for the string str
 */
void print_rev(char *s)
{
	char x[63];

	int m = 0;

while (*s != '\0')
{
	x[m] = *s;
	m++;
	s++;
}
for (m = 63; m >= 0; m--)
{
	_putchar(x[m]);
}
_putchar('\n');
}

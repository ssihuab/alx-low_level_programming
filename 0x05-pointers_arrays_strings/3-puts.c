#include "main.h"

/**
 * _puts - to print a string
 *
 * @str: this is a pointer variable for the string str
 */
void _puts(char *str)
{
int m;


m = 0;
while (str[m] != '\n')
{
	_putchar(str[m]);
	m++;
}
_putchar('\n');
}

#include "main.h"

/**
 * _puts - to print a string
 *
 * @str: this is a pointer variable for the string str
 */
void _puts(char *str)
{
while (*str != '\0')
{
	_putchar(*str);
	str++;
}
_putchar('\n');
}

#include "main.h"

/**
 * _isdigit - check if the given character is digit
 *
 * @c: number to be checked
 * Return: int
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);
	_putchar('\n');
}

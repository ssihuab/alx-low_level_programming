#include "main.h"
/**
 * _islower - prints the lower case letters
 *
 * @c: the character to be shared
 * Return: int
 */
int _islower(int c)
{

if (c > 'a' && c < 'z')
	return (1);
else
	return (0);

_putchar('\n');
}

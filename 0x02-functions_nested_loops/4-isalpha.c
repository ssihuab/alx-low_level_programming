#include "main.h"
/**
 *  _isalpha - prints the lower case letters
 *
 * @c: the character to be checked
 * Return: int
 */
int _isalpha(int c)
{

if (c > 'a' && c < 'z')
	return (1);
else if (c > 'A' && c < 'Z')
	return (1);
else
	return (0);

_putchar('\n');
}

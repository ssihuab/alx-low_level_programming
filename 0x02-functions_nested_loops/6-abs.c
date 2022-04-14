#include "main.h"
/**
 * _abs - prints the absolute value of a given number
 *
 * @n: the number to be checked
 * Return: int
 */
int _abs(int n)
{

	if (n >= 0)
	{
	return (n);
	}
	else
	{
	 int m;
	m = n * -1;
	return (m);
	}

_putchar('\n');

}

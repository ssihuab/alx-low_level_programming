#include "main.h"
#include <stdio.h>

/**
 * _strlen - to print size of the string
 * @s: it is pointer variable to the string
 *
 * Return: Always int.
 */
int _strlen(char *s)
{
	int m;

	m = 0;
	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}

#include <stdio.h>
/**
 * main - it prints Lowercase English Alphabets back ward
 *
 * Return: Always 0 .
 *
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
		{
		putchar(ch);
		ch--;
		}
	putchar('\n');
	return (0);
}


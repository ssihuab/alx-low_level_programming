#include <stdio.h>
/**
 * main - it prints Lowercase English Alphabets
 *
 * Return: Always 0 .
 *
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
		{
		putchar(ch);
		ch++;
		}
	putchar('\n');
	return (0);
}

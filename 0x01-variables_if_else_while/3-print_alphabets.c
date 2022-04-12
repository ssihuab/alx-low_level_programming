#include <stdio.h>
/**
 * main - it prints both Lowercase and highercase English Alphabets
 *
 * Return: Always 0 .
 *
 */
int main(void)
{
	char ch = 'a';

	char chh;

	while (ch <= 'z')
		{
		putchar(ch);
		ch++;
		}

	for (chh = 'A' ; chh <= 'Z' ; chh++)
		{
		putchar(chh);
		}

	printf("\n");
	return (0);
}


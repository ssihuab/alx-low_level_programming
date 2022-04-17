#include <stdio.h>
/**
 * main - it prints hexadecimals
 *
 * Return: Always 0 .
 *
 */
int main(void)
{
	int num = 0;

	char chh;

	while (num <= 9)
		{
		putchar('0' + num);
		num++;
		}

	for (chh = 'a' ; chh <= 'f' ; chh++)
		{
		putchar(chh);

		}
	putchar('\n');
	return (0);
}

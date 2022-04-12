#include <stdio.h>
/**
 * main - numbers from 0 to 9
 *
 * Return: Always 0 .
 *
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
		{
		putchar('0' + num);
		num++;
		}
	putchar('\n');
	return (0);
}


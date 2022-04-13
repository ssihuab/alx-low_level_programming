#include "main.h"
/**
 * print_alphabet_x10 - prints the lower case letters 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
char l;

int m;

for (m = 0; m < 10; m++)
{
for (l = 'a'; l <= 'z'; l++)
_putchar(l);
_putchar('\n');
}

}


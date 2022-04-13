#include "main.h"
/**
 * print_alphabet - prints the lower case letters 10 times
 *
 */
void print_alphabet_x10(void)
{
char l;

int m;

for (m=0; m < 10; m++)
{
for (l = 'a'; l <= 'z'; l++)
_putchar(l);
_putchar('\n');
}
_putchar('\n');
}


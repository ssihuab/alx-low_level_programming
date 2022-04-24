#include "main.h"
#include <stdio.h>

/**
 * swap_int - to swap the value of a and b
 * @c: pointer variable to a
 * @d: ponter variable to b
 */
void swap_int(int *c, int *d)
{
	int x;

x = *c;
*c = *d;
*d = x;
}

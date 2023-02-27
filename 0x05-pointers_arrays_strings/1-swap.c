#include "main.h"

/**
 * swap_int - swaps the adresses of two numbers
 * @a: will become b
 * @b: will become c
 */

void swap_int(int *a, int *b)

{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

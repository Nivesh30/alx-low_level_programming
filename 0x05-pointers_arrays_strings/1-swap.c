#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps pointer values
 * @a: a value
 * @b: b value
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

#include "main.h"
#include <stdio.h>

/**
 * _isupper - takes integer to see if uppercase
 * @c: integer input
 * Return: 1 for uppercase 0 if not
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}

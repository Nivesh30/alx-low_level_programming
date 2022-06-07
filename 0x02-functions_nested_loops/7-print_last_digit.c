#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - output the last digit
 *
 * @a: input integer
 *
 * Return: 0 always
 */

int print_last_digit(int a)
{
	_putchar('0' + _abs(a % 10));
	return (_abs(a % 10));
}

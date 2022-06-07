#include "main.h"
/**
 * print_last_digit - output the last digit
 *
 * @a: input integer
 *
 * Return: 0 always
 */
int print_last_digit(int a)
{
	if (a < 0)
	{
		a = -a;
	}
	a = a % 10;
	_putchar('0' + a);
	return (a);
}

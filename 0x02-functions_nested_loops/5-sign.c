#include "main.h"
/**
 * print_sign - takes integer value
 *
 * @n: entered integer value
 *
 * Return: 1 positive, 0 zero, -1 negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}


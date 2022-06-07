#include "main.h"

/**
 * times_table - prints time table
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			int c = a * b;

			if (b == 0)
			{
				_putchar(c + '0');
			}
			else if (c >= 10)
			{
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			if (b != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}

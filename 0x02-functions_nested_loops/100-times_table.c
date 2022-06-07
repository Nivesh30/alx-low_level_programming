#include "main.h"
/**
 * print_times_table - prints out time table
 * @n: integer entered
 */
void print_times_table(int n)
{
	int a;
	int b;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				int mul = b * a;

				if (b == 0)
				{
					_putchar('0');
				} else if (mul <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + mul);
				} else if (mul > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (mul / 100));
					_putchar('0' + ((mul / 10) % 10));
					_putchar('0' + (mul % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (mul / 10));
					_putchar('0' + (mul % 10));
				}
			}
			_putchar('\n');
		}
	}
}

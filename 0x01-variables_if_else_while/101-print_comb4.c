#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (b > a && c > b)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					if (a != 7 || b != 8 || c != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

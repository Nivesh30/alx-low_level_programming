#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 10; a <= 19; a++)
	{
		for (b = 10; b <= 19; b++)
		{
			if ((a % 10) < (b % 10))
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				if (b != 19 || a != 18)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

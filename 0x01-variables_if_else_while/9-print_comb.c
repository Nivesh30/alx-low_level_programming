#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int i;

	for  (i = 0; i < 9; i++)
	{
		putchar( i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}

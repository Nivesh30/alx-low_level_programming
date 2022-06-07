#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 1; b <= 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

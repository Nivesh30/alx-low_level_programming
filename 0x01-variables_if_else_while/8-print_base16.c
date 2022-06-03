#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 always (success)
 */
int main(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (a = 'a'; a < 'g'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

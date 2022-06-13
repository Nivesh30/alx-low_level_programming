#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints the string in reverse
 * @s:input
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i > 0)
	{
		s--;
		putchar(*s);
		i--;
	}
	putchar('\n');
}

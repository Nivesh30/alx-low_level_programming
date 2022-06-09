#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints out triangle
 * @size: Size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	for (a = 0; a < size; a++)
	{
		for (c = size - 1 - a; c > 0; c++)
		{
			_putchar(' ');
		}
		for (b = 0; b <= a; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints out numbers to 98
 * @n: integer to go to 98
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n != 97)
		{
			if (n == 98)
			{
				printf("%d", n);
				n--;
			}
			else
			{
				printf("%d, ", n);
				n--;
			}
		}
	}
	else
	{
		while (n != 99)
		{
			if (n == 98)
			{
				printf("%d", n);
				n++;
			}
			else
			{
				printf("%d, ", n);
				n++;
			}
		}
	}
	printf("\n");
}

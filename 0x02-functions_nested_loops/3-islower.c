#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: letter input
 * Return: 0 always
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

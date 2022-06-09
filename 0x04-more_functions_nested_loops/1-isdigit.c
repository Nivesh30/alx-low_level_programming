#include "main.h"
#include <stdio.h>

/**
 * _isdigit - takes input to check if number
 * @c: input from user
 * Return: 1 if number else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

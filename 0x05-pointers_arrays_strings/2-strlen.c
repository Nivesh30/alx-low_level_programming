#include "main.h"
#include <stdio.h>

/**
 * _strlen - takes input to return length
 * @s: character c
 * Return: length of string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}

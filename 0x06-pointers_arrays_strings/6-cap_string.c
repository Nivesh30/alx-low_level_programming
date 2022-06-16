#include "main.h"
/**
 * cap_string - capitilize words
 * @str: string
 * Return: capitlized string
 */
char *cap_string(char *str)
{
	int e = 0;
	int f = 0;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	while (str[e] != '\0')
	{
		if (e == 0 && str[e] >= 97 && str[e] <= 122)
		{
			str[e] = str[e] - 32;
		}
		while (c[f] != '\0')
		{
			if (c[f] == str[e] && (str[e + 1] >= 97 && str[e + 1] <= 122))
			{
				str[e + 1] = str[e + 1] - 32;
			}
			f++;
		}
		e++;
	}
	return (str);
}

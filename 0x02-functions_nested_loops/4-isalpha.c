#include "main.h"
/**
 * _isalpha - checks input character
 *
 * @c: character input
 *
 * Retrun: 0 always
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

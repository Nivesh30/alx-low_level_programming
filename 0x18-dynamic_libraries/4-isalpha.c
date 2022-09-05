#include "main.h"
/**
 *   *Main - this is the main function
 *   * _isalpha - returns  if c is a letter. lowercase or uppercase
 *  * @c: The int to print
 *   *  Return: Always 0.
 */
int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}
}

#include "main.h"
/**
 * _isalpha- check for alphabetic character
 * @c: the character to be checked
 * Return: 1 for alpabet or 0 for anyhing else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}


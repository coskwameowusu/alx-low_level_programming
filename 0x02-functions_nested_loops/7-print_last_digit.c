#include "main.h"
/**
 * print_last_digit - a function to print last digit of a number.
 * @n: the int to check
 * Return: return the last digit
 */
	int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;
	a = n % 10;
	if (a < 0)
	a = -a;
	_putchar(a + '0');
	return (0);
}

#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: every minute of the day
 */

void times_table(void)
{
int m, n, p;

for (m = 0; m < 10; m++)
{
for (n = 0; n < 10; n++)
{
p = m * n;
if (n == 0)
{
	_putchar(p + '0');
}
else
{
	_putchar(',');
	_putchar(' ');
	if (p < 10)
{
	_putchar(' ');
}
else
{
	_putchar((p / 10) + '0');
}
	_putchar((p % 10) + '0');
}
}
_putchar('\n');
}
}


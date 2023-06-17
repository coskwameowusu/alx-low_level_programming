#include <stdio.h>
/**
* main - print numbers from 0 t0 9
* Return:0 (succes)
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	putchar((i % 10) + '0');

	putchar('\n');
	return (0);
}

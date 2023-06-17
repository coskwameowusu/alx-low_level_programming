#include <stdio.h>
/**
* main - print numbers from 0 t0 9
* Return:0 (succes)
*/

int main(void)
{
	int i;
	char m;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (m = 'a'; m <= 'f'; m++)
		putchar(m);

	putchar('\n');
	return (0);
}


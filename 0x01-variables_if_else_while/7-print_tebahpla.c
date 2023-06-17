#include <stdio.h>
/**
* main - pront the lower case letters in revers 0 t0 9
* followed by a new line
* Return:0 (succes)
*/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	putchar(ch);

	putchar('\n');
	return (0);
}


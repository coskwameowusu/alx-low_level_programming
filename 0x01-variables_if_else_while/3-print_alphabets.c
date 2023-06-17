#include <stdio.h>
/**
* main - Positive or Negative
* Return:0 (succes)
*/

int main(void)
{
	char la;

	for (la = 'a';  la <= 'z'; la++)
	putchar(la);

	for (la = 'A'; la <= 'Z'; la++)
	putchar(la);

	putchar('\n');
	return (0);
}

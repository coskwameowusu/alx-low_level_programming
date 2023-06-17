#include <stdio.h>
/**
* main - Positive or Negative
* Return:0 (succes)
*/

int main(void)
{
	char la;

	for (la = 'a';  la <= 'z'; la++)
{
	if (la != 'e' && la != 'q')
	putchar(la);
}
	putchar('\n');
	return (0);
}

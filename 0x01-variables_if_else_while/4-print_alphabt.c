#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Positive or Negative
* Return:0 (succes)
*/

int main(void)
{
	int i;
	for (i=97; i<123; i++)
	{
		if(i!=101 && i!=113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
* main - print numbers from 0 t0 9
* Return:0 (succes)
*/

int main(void)
{
        int i;
        for(i=48, i<58; i++)
        {
                putchar(i);
        }
	for(i=97, i<103; i++)
	{
		putchar(i);
	}
        putchar('\n');
	return (0);
}


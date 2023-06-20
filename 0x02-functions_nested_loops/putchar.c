#include "main"
#include <unistd.h>

/**
* _putchar - writes the character to stdout
*@c: - The character to print
* Return: 1 (success)
* On error, -1 is return, and erno is set appropiately
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
